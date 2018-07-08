import java.util.*;

public class Rook extends Figure {
    Rook(int x, int y, char name, char color) {
        m_x = x;
        m_y = y;
        m_name = name;
        m_color = color;
    }
    @Override 
    public void step(int currentX, int currentY, int goX, int goY) {
        System.out.println("gna x y ("+m_x+","+m_y+")-ic");
    }
    @Override
    public void printFigure() {
        System.out.println(m_name);
    }
}

