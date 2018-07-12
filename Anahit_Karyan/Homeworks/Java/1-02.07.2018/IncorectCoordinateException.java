public class IncorectCoordinateException extends Exception {
    public IncorectCoordinateException() {
        super();
    }
    public String getMessage() {
        return "IncorectCoordinateException: The coordinate less than 0 or greater than 7! The coordinate can be [0-7]";
    }     
}   
