import java.util.*;

class ParentClass {
    static void play() {
        System.out.println("hello from parent");
    }
}

class Overriding extends ParentClass {
    @Override
    static void play() {
        System.out.println("hello from child");
    }
    public static void main(String[] args) {
        play();
    }
}