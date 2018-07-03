class Rook extends Figure{
    
    public Rook(char color, int x, int y) {
        if (color == 'w') {
            symbol = 'r';
        } else {
            symbol = 'R';
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
