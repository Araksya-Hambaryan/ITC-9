class Rook extends Figure{
    
    public Rook(char color, int x, int y) {
        if (color == 'w') {
            symbol = '\u265C';
        } else {
            symbol = '\u2656';
        }
        this.x = x;
        this.y = y;
        name = "Rook";
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
