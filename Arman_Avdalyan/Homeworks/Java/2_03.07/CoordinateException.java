class CoordinateException extends Exception {
    private String message = null;
    CoordinateException(String message) {
        this.message = message;
    }

    public void showMessage() {
        System.out.println(message);
    }
}
