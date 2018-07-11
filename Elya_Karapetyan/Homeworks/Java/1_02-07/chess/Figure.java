public class Figure {
    //The coordinates of the figure
    protected int m_x;  
    protected int m_y;
    //The name of the figure
    protected char m_name;
    // The color of the figure
    protected char m_color;
    //Set the name of the figure
    public char getName() {
        return m_name;
    } 
    //Get the name of the Figure
    public void setName(char name) {
        m_name = name;
    }
    // Move the figure
    public void step(int currentX, int currentY, int goX, int goY) {}
    //Print the figure
    public void printFigure() {}
}
