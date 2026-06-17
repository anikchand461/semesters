import java.util.*;

abstract class Animal {
    void sleep() {
        System.out.println("slipping...");
    }
    abstract void sound();
}

class AbstractClass extends Animal {
    void sound() {
        System.out.println("bark");
    }

    public static void main(String[] args) {
        AbstractClass ac = new AbstractClass();
        ac.sound();
    }
}