class Queen extends Figure{
    
    public Queen(char color, int x, int y) {
        if (color == 'w') {
            this.symbol = 'q';
        } else {
            this.symbol = 'Q';
        }
        this.x = x;
        this.y = y;
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
