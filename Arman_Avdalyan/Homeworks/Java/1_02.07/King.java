class King extends Figure{
    
    public King(char color, int x, int y) {
        if (color == 'w') {
            symbol = 'k';
        } else {
            symbol = 'K';
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
        return this.x;
    }
    
    @Override
    int getY() {
        return this.y;
    }
}
