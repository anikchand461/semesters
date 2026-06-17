import java.util.*;

class Child implements Runnable {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("child " + i);
        }
    }
}

public class MainAndChildThread {

    public static void main(String[] args) {
        Child c = new Child();
        Thread t = new Thread(c);

        t.start();

        for (int i = 0; i < 10; i++) {
            System.out.println("main " + i);
        }
    }
}