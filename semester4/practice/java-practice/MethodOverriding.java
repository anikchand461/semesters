import java.util.*;

class Parent {
    void show() {
        System.out.println("parent class");
    }
}

class Child extends Parent {
    @Override
    void show() {
        System.out.println("child class");
    }
}

class MethodOverriding {

    public static void main(String[] args) {
        Parent p = new Child();
        p.show();
    }
}