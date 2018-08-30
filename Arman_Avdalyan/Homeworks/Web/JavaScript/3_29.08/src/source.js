var suit = null;
var cards = new Array;
var passCount = 0;
function main() {
    setCards(getCardsPositions());
}

function setCards(cards) {
    const containerTop = document.getElementById('containerTop');
    const containerBottom = document.getElementById('containerBottom');
    const size = cards.length;
    for (let i = 0; i < size; ++i) {
        let cardElem = document.createElement('img');
        cardElem.id = 'id_' + cards[i].name;
        cardElem.src = "images/back.png";
        cardElem.onclick = function() {
            
        }

        if (i < 16) {
            if (i < 8) {
                cardElem.style.display = 'none';
            } else if (i < 12 && i >= 8) {
                cardElem.src = "images/" + cards[i].name + ".png";
            }
            containerTop.appendChild(cardElem);
        } else {
            if (i < 24) {
                cardElem.style.display = 'none';
            } else if (i >= 28 && i < 32) {
                cardElem.src = "images/" + cards[i].name + ".png";
            }
            containerBottom.appendChild(cardElem);
        }
    }
}

function setSuit(suit) {
    this.suit = suit;
    hideFieldById('suite_container');
    let image = document.getElementById('suit_image');
    image.src = "images/" + suit + ".jpg";
    console.log("images/" + suit + ".jpg");
    openAllCards();
}

function hideFieldById(id) {
    const elem = document.getElementById(id);
    elem.style.display = 'none';
}

function pass() {
    let text = document.getElementById('text');
    switch (passCount) {
        case 0:
            text.textContent = "Player 2 turn";
            break;
        case 1:
            text.textContent = "Player 1 turn";
            openAllCards();
            break;
        case 2:
            text.textContent = "Player 2 turn";
            document.getElementById('btn_pass').style.visibility = 'hidden';
            break;
    }
    ++passCount;
}

function openCards(from, to) {
    for (i = from; i < to; ++i) {
        const id = "id_" + cards[i].name;
        let elem = document.getElementById(id);
        elem.src = "images/" + cards[i].name + ".png";
    }
}

function openAllCards() {
    openCards(12, 16);
    openCards(24, 28);
}

function getCardsPositions() {
    const cardNames = ['7H', '7D', '7S', '7C',
        '8H', '8D', '8S', '8C',
        '9H', '9D', '9S', '9C',
        '10H', '10D', '10S', '10C',
        'JH', 'JD', 'JS', 'JC',
        'QH', 'QD', 'QS', 'QC',
        'KH', 'KD', 'KS', 'KC',
        'AH', 'AD', 'AS', 'AC'];
    let tmpCardsName = cardNames.slice();
    console.log(tmpCardsName);
    const size = cardNames.length;
    let tmpSize = size;
    for (let i = 0; i < size; ++i) {
        const position = Math.floor((Math.random() * tmpSize));
        let card = new Card(tmpCardsName[position], true, 'back');
        if (i < 16) {
            card.side = 'back';
        } else {
            card.side = 'front';
        }
        cards.push(card);
        --tmpSize;
        tmpCardsName.splice(position, 1);
    }
    return cards;
}

class Card {
    constructor(name, isVisible, side) {
        this.name = name;
        this.isVisible = isVisible;
        this.side = side;
    }
}