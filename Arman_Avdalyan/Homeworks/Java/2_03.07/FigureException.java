class FigureException extends Exception {
    private String message = null;
    FigureException(String message) {
        this.message = message;
    }

    public void showMessage() {
        System.out.println(message);
    }
}
