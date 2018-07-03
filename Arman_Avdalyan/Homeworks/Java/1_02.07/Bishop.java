class Bishop extends Figure{
    
    public Bishop(char color, int x, int y) {
        if (color == 'w') {
            symbol = 'b';
        } else {
            symbol = 'B';
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
