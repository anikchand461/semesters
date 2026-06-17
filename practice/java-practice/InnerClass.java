import java.util.*;

class Outer {
    private int data = 100;

    class Inner {
        void show() {
            System.out.println(data);
        }
    }

    static class StaticNested {
        void display() {
            System.out.println("static nested class");
        }
    }

    void method() {
        // local inner class
        class Local {
            void print() {
                System.out.println("local inner class");
            }
        }

        new Local().print();
    }
}

class InnerClass {
    public static void main(String[] args) {
        Outer out = new Outer();
        Outer.Inner in = out.new Inner();
        in.show();

        Outer.StaticNested sn = new Outer.StaticNested();
        sn.display();

        out.method();
    }
}