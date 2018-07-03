class Knight extends Figure{
    
    public Knight(char color, int x, int y) {
        if (color == 'w') {
            symbol = '\u265E';
        } else {
            symbol = '\u2658';
        }
        this.x = x;
        this.y = y;
        name = "Knight";
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
