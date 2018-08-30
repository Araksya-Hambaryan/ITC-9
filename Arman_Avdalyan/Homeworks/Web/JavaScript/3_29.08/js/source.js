var suit = null;
var cards = new Array;
var passCount = 0;
var firstPlayerPoints = 0;
var secondPlayerPoints = 0;
var choosed = false;

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
        cardElem.onclick = function () {
            if (cards[i].side == 'back') {
                return;
            }
            cardElem.style.display = 'none';
            const name = cards[i].name;
            const id = null;
            let index = 0;
            for (let i = 0; i < size; ++i) {
                if (cards[i].name == name) {
                    index = i;
                    break;
                }
            }
            let image = null;
            if (i - 16 >= 0) {
                image = document.getElementById("id_" + cards[i].name);
                console.log('id_' + cards[i].name);
            }
            image.style.display = 'inline-block';
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

function compareCards(card1, card2) {
    const name1 = card1.name;
    const name2 = card2.name;
    const points = getPoints(name1) + getPoints(name2);
    let winner = undefined;
    if (getSuit(name1) != getSuit(name2) && getSuit(name2) == suit.charAt(0)) {
        winner = 2;
        return [points, winner];
    }
    if (getSuit(name1) == getSuit(name2)) {
        if (getRank(name1) > getRank(name2)) {
            winner = 1;
            return [points, winner];
        } else {
            winner = 2;
            return [points, winner];
        }

    }
}

function getRank(name) {
    return (name - name.charAt(name.length - 1));   
}

function getPoints(cardName) {
    switch (cardName.charAt(0)) {
        case '7':
        case '8':
            return 0;
        case '9':
            if (isCrochet(cardName)) {
                return 14;
            }
            return 0;
        case 'J':
            if (isCrochet(cardName)) {
                return 20;
            }
            return 2;
        case 'Q':
            return 3;
        case 'K':
            return 4;
        case 'A':
            return 11;
        default:
            return 10;
    }
    if (cardName.substring(0, 2) == '10') {
        return 10;
    }
}

function isCrochet(name) {
    return name.charAt(name.length - 1) == suit.charAt(0)
}

function getSuit(name) {
    return name.charAt(name.length - 1)
}

class Card {
    constructor(name, isVisible, side) {
        this.name = name;
        this.isVisible = isVisible;
        this.side = side;
    }
}