import java.util.*;

interface Shape {
    double volume();
    double pi = Math.PI;
}

class Sphere implements Shape {
    double r;
    Sphere(double r) {
        this.r = r;
    }
    public double volume() {
        return (4.0/3.0) * pi * Math.pow(r, 3);
    }
}

class Cone implements Shape {
    double r;
    double h;
    Cone(double r, double h) {
        this.r = r;
        this.h = h;
    }

    public double volume() {
        return (1.0/3.0) * pi * Math.pow(r, 2) * h;
    }
}

class VolumeSqCone {
    public static void main(String[] args) {
        Sphere sp = new Sphere(1);
        System.out.println(sp.volume());

        Cone c = new Cone(1, 2);
        System.out.println(c.volume());
    }
}