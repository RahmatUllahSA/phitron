// Custom exception class
class MyCustomException extends Exception {
    private String message;

    // Constructor that accepts a String argument
    public MyCustomException(String message) {
        this.message = message;
    }

    // Method to print the stored message
    public void printMessage() {
        System.out.println("Exception Message: " + message);
    }
}

public class CustomExceptionDemo {
    public static void main(String[] args) {
        try {
            // Simulate a situation where the custom exception is thrown
            throw new MyCustomException("This is a custom exception message!");
        } catch (MyCustomException e) {
            // Handle the custom exception
            System.out.println("Caught a custom exception.");
            e.printMessage();
        }
    }
}
