class King extends Figure{
    
    public King(char color, int x, int y) {
        if (color == 'w') {
            symbol = '\u265A';
        } else {
            symbol = '\u2654';
        }
        this.x = x;
        this.y = y;
        name = "King";
    }

    @Override
    char getSymbol() {
        return symbol;
    }

    @Override
    int getX() {
        return this.x;
    }
    
    @Override
    int getY() {
        return this.y;
    }
}
