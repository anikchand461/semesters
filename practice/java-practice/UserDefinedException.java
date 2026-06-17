import java.util.*;

class InvalidMarksException extends Exception {
    InvalidMarksException(String msg) {
        super(msg);
    }
}

public class UserDefinedException {

    public static void main(String[] args) {
        int m1 = 80, m2 = 90, m3 = 110;

        try {
            if (m1 > 100 || m2 > 100 || m3 > 100) {
                throw new InvalidMarksException("marks cannot be greater than 100");
            }

            double percentage = (m1 + m2 + m3) / 3.0;

            System.out.println("percentage = " + percentage);
        } catch(InvalidMarksException e) {
            System.out.println(e);
        }
    }
}