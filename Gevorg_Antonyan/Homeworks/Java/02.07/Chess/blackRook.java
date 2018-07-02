public class BlackRook public figur {
    int x = 1;
    int y = 1;
    char fig = 'r';
    public blackRook() {
        Figur(x, y, fig);
    }
    public blackRook(int x1, int x2) {
        Figur(x1, y2, fig);
    }
    public void step1(int m) {
        Figur.step(0, m);
    }
    public void step2(int m) {
        Figur.step(0, -m);
    }
    public void step3(int m) {
        Figur.step(m, 0);
    }
    public void step4(int m) {
        Figur.step(-m, 0);
    }
}
