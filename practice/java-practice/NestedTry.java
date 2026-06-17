import java.util.*;

class NestedTry {
    public static void main(String[] args) {
        try {
            int[] arr = new int[5];
            arr[10] = 23;
        } catch(ArithmeticException e) {
            System.out.println(e.getMessage());
        } catch(ArrayIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        } catch(Exception e) {
            System.out.println(e.getMessage());
        }

        System.out.println("nested try ....");
        try {
            System.out.println("outer try ...");
            try {
                int result = 10 / 0;
            } catch (ArithmeticException e) {
                System.out.println(e.getMessage());
            } 
            String s = null;
            s.length();
        } catch(NullPointerException e) {
            System.out.println(e.getMessage());
        }
    }
}