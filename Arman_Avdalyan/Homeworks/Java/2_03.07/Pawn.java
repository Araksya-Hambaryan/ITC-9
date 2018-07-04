class Pawn extends Figure{
    
    public Pawn(char color, int x, int y) {
        if (color == 'w') {
            symbol = '\u2659';
        } else {
            symbol = '\u265F';
        }
        this.x = x;
        this.y = y;
        name = "Pawn";
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
