public class blackBishop public figur {
    int x = 1;
    int y = 3;
    char fig = 'b';
    public blackBishop() {
        Figur(x, y, fig);
    }
    public blackBishop(int x1, int x2) {
        Figur(x1, y2, fig);
    }
    public void step1(int m) {
        Figur.step(m, m);
    }
    public void step2(int m) {
        Figur.step(m, -m);
    }
    public void step3(int m) {
        Figur.step(-m, m);
    }
    public void step4(int m) {
        Figur.step(-m, -m);
    }
}
