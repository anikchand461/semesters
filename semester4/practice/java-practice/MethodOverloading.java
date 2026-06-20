import java.util.*;

class Area {
    double area(double a) {
        return a*a;
    }

    int area(int a, int b) {
        return a*b;
    }

    double area(double b, double h) {
        return 0.5 * b * h;
    }
}

class MethodOverloading {
    public static void main(String[] args) {
        Area a = new Area();

        System.out.println(a.area(2, 3));
        System.out.println(a.area(2.3, 4.1));
        System.out.println(a.area(1.2));
    }
}