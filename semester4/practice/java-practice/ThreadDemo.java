import java.util.*;

class MyThread extends Thread {
    public void run() {
        System.out.println("running...");
    }
}

public class ThreadDemo {

    public static void main(String[] args) {
        MyThread mt = new MyThread();

        mt.start();
    }
}