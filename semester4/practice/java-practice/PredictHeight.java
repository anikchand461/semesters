import java.util.*;

interface Height {
    double calculate(double father_height, double mother_height);
}

class ChildHeight implements Height {
    public double calculate(double father_height, double mother_height) {
        return (father_height + mother_height) / 2;
    }
}

public class PredictHeight {

    public static void main(String[] args) {
        Height h = new ChildHeight();
        double childHeight = h.calculate(100, 200);
        System.out.println(childHeight);
        
    }
}