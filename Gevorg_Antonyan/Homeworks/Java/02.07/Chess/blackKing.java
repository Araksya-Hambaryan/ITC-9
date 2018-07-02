public class blackKing public figur {
    int x = 1;
    int y = 4;
    char fig = 'k';
    public blackKing() {
        Figur(x, y, fig);
    }
    public blackKing(int x1, int x2) {
        Figur(x1, y2, fig);
    }
    public void step1(int m) {
        Figur.step(0, 1);
    }
    public void step2(int m) {
        Figur.step(0, -1);
    }
    public void step3(int m) {
        Figur.step(1, 0);
    }
    public void step4(int m) {
        Figur.step(1, 1);
    }
    public void step5(int m) {
        Figur.step(1, -1);
    }
    public void step6(int m) {
        Figur.step(-1, 1);
    }
    public void step7(int m) {
        Figur.step(-1, -1);
    }
    public void step8(int m) {
        Figur.step(-1, 0);
    }
}
