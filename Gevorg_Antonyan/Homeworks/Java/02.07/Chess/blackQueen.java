public class blackQueen public figur {
    int x = 1;
    int y = 5;
    char fig = 'q';
    public blackQueen() {
        Figur(x, y, fig);
    }
    public blackQueen(int x1, int x2) {
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
        Figur.step(m, m);
    }
    public void step5(int m) {
        Figur.step(m, -m);
    }
    public void step6(int m) {
        Figur.step(-m, m);
    }
    public void step7(int m) {
        Figur.step(-m, -m);
    }
    public void step8(int m) {
        Figur.step(-m, 0);
    }
}
                                                                                                                                 
       
