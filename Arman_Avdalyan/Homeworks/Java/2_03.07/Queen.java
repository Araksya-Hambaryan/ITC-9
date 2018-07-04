class Queen extends Figure{
    
    public Queen(char color, int x, int y) {
        if (color == 'w') {
            this.symbol = '\u265B';
        } else {
            this.symbol = '\u2655';
        }
        this.x = x;
        this.y = y;
        name = "Queen";
    }

    @Override
    char getSymbol() {
        return symbol;
    }

    @Override
    int getX() {
        return x;
    }
    
    @Override
    int getY() {
        return y;
    }
}
