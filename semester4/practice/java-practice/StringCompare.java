import java.util.*;

public class StringCompare {

    public static void main(String[] args) {
        String s = new String("Anik");
        String t = new String("Anik");
        String u = t;

        System.out.println(s == t); // false : different objects
        System.out.println(t == u); // same object : copy : true

        System.out.println(s.equals(t)); // compare contents only ... in both cases true ... s, t, u, t

        // lexicgraphic comparison -> 0 if equal, <0 if s1<s2, >0 if s1>s2
        System.out.println(s.compareTo(t)); // 0 
        System.out.println("anik".compareTo("Anik")); // 32 because a - A = 32 ASCII value
    }
}