class Knight extends Figure{
    
    public Knight(char color, int x, int y) {
        if (color == 'w') {
            symbol = 'h';
        } else {
            symbol = 'H';
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
