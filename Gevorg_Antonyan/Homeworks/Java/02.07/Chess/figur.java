public class Figur {
    int x = 1;
    int y = 1;
    char fig = null;
    public Figur(x, y, fig) {
        board.addFigur(x, y, fig);
    }
    public void step(int k, int z) {
        if (0 > (Figur.x + k) || 9<=(Figur.x + k) || (1 > (Figur.y + z) || 9<=(Figur.y + z)) {
            System.out.println("invaled step");
        } else { 
            board.dellFigur(x, y);
            this.x = this.x + k;
            this.y = this.y + z;
            board.addFigur(x, y, fig);
        }        
    }
}
