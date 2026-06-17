import java.util.*;

interface A {
    default void show() {
        System.out.println("A");
    }
}

interface B {
    default void show() {
        System.out.println("B");
    }
}

class Interfaces implements A, B {

    @Override
    public void show() {
        A.super.show();
        B.super.show();
    }
    
    public static void main(String[] args) {
        Interfaces i = new Interfaces();

        i.show();
    }
}