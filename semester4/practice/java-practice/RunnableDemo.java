import java.util.*;

class MyRun implements Runnable {
    public void run() {
        System.out.println("thread is running");
    }
}

public class RunnableDemo {
    public static void main(String[] args) {
        MyRun r = new MyRun();
        Thread t = new Thread(r);
        t.start();
    }
}