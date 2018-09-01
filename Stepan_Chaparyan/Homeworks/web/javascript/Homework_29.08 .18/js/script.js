


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
            } else if(i > 27 && i < 32) {
                cardElem.src = "images/" + cards[i].name + ".png";
            }
            container.appendChild(cardElem);
        }
    }
    
    class Card {
        constructor(name, isVisible, side) {
            this.name = name;
            this.isVisible = isVisible;
            this.side = side;
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
        const cardPositions = [];

        const size = cardNames.length;
        let tmpSize = cardNames.length;
        for (let i = 0; i < size; ++i) {
            const position = Math.floor((Math.random() * tmpSize));
            console.log(tmpSize);
            console.log(position);

            let card = new Card(cardNames[position], true, 'back');
            if (i < 16) {
                card.side = 'back';
            } else {
                card.side = 'front';
            }
            cardPositions.push(card);
            --tmpSize;
            cardNames.splice(position, 1);
        }
        return cardPositions;
    }


function showHideTable() {
    let x = document.getElementById("tableSpace");
    if (x.style.display === "none") {
        x.style.display = "block";
    } else {
        x.style.display = "none";
    }
}


