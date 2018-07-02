class Pawn extends Figure{
    
    public Pawn(char color, int x, int y) {
        if (color == 'w') {
            symbol = 'p';
        } else {
            symbol = 'P';
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
