public class CoordinateException extends Exception {
    private String message = null;
    public CoordinateException(String message) {
        this.message = message;
    }
    public void printMessage() {
        System.out.println(message);
    }
}