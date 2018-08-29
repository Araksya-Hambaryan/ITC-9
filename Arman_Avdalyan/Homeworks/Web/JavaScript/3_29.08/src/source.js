var suit = null;
var cards = new Array;
var passCount = 0;
function main() {
    setCards(getCardsPositions());
}

function setCards(cards) {
    const container = document.getElementById('container');
    const size = cards.length;
    for (let i = 0; i < size; ++i) {
        let cardElem = document.createElement('img');
        cardElem.id = 'id_' + cards[i].name;
        cardElem.src = "images/back.png";
        if (i < 16) {
            cardElem.style.display = 'none';
        } else if (i > 27 && i < 32) {
            cardElem.src = "images/" + cards[i].name + ".png";
        }
        container.appendChild(cardElem);
    }
}

function setSuit(suit) {
    this.suit = suit;
    hideFooter();
    openAllCards();
}

function hideFooter() {
    const footer = document.getElementById('footer');
    footer.style.display = 'none';
}

function pass() {
    switch (passCount) {
        case 0:
            openCards(16, 20);
            break;
        case 1:
            openCards(24, 28);
            break;
        case 2:
            openCards(20, 24);
            document.getElementById('btn_pass').style.visibility = 'hidden';
            alert("You should choose suite");
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
    const size = cards.length;
    for (let i = 16; i < size; ++i) {
        const id = "id_" + cards[i].name;
        let elem = document.getElementById(id);
        elem.src = "images/" + cards[i].name + ".png";
    }
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