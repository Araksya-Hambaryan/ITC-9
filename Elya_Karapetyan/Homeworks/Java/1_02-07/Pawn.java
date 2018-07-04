public class Pawn extends Figure {
    @Override
    public boolean step(int currentx, int currentY, int goX, int goY) {
        if (m_name == 'P' || m_name == 'p') {
            if (goX == currentX && (Math.abs(goY - currentY) == 1)) {
                return true;
        } 
    }
}
