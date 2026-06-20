import java.util.*;

class A implements Runnable {
    public void run() {
        System.out.println("A running...");
    }
}

class B implements Runnable {
    public void run() {
        System.out.println("B running...");
    }
}

public class MultipleThreadMultipleTask {

    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        Thread t1 = new Thread(a);
        Thread t2 = new Thread(b);
        t1.start();
        t2.start();
    }
}