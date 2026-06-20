import java.util.*;

interface A {
    default void fn() {
        System.out.println("A ...");
    }
}

interface B {
    default void fun() {
        System.out.println("B ...");
    }
}

class C {
    void func() {
        System.out.println("C ...");
    }
}

class All extends C implements A, B {
    void funcn() {
        System.out.println("quack ...");
    }
}

class ExtendsAndInplements {
    public static void main(String[] args) {
        All all = new All();
        all.fn();
        all.fun();
        all.func();
        all.funcn();
    }
}