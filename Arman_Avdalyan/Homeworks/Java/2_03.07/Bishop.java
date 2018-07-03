class Bishop extends Figure{
    
    public Bishop(char color, int x, int y) {
        if (color == 'w') {
            symbol = '\u265D';
        } else {
            symbol = '\u2657';
        }
        this.x = x;
        this.y = y;
        name = "Bishop";
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
