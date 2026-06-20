import java.util.*;

class FindMaximum {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("please enter numbers");
            return;
        }

        int max = Integer.parseInt(args[0]);

        for (int i = 0; i < args.length; i++) {
            int current_num = Integer.parseInt(args[i]);
            if (current_num > max) {
                max = current_num;
            }
        }

        System.out.println(max);
    }
}