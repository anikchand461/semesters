import java.util.*;

class Student {
    String name;
    int age;
    
    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println(name + " " + age);
    }
}

class ArrayOfObjects {
    public static void main(String[] args) {
        Student s1 = new Student("anik", 23);
        Student s2 = new Student("Anik", 12);
        Student s3 = new Student("Chand", 32);

        Student[] arr = new Student[3];

        arr[0] = s1;
        arr[1] = s2;
        arr[2] = s3;

        for (int i = 0; i < 3; i++) {
            arr[i].display();
        }
    }
}