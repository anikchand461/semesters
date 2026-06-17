import java.util.*;

class A {
    int a = 5;
    A() {
        System.out.println("class A...");
    }
}

public class SuperAndThis extends A{

    int a = 20;

    SuperAndThis() {
        super();
    }

    void display() {
        System.out.println(this.a);
        System.out.println(super.a);
    }

    public static void main(String[] args) {
        SuperAndThis st = new SuperAndThis();
        st.display();
    }
}