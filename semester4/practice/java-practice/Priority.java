import java.util.*;

class MyThread extends Thread {
    public void run() {
        System.out.println(getName() + " priority " + getPriority());
    }
}

class Priority {
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
        MyThread t3 = new MyThread();

        t1.setName("anik");
        t2.setName("chand");
        t3.setName("ANIK");
        
        t1.setPriority(Thread.MIN_PRIORITY); // 1
        t2.setPriority(Thread.MAX_PRIORITY); // 10
        t3.setPriority(Thread.NORM_PRIORITY); // 5

        t1.start();
        t2.start();
        t3.start();
    }
}