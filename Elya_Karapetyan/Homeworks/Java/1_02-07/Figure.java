import java.util.*

public abstract class Figure {
    private int m_x;
    private int m_y;
    private char m_color;
    private char m_name;
    private void setName() {
       m_name = getFigure(m_x, m_y);
    }
    private void setColor() {
        if (m_name == 'P') {
            m_color = 'w'; 
        } else if (m_name == 'p') {
            m_color = 'b'
        }
    }
    private char getName() {
        return m_name;
    }
    private char getColor() {
        return m_color;
    }
    public boolean step(int currentX, int currentY, int goX, int goY) {}
}
