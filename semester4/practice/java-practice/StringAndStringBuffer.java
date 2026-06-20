import java.util.*;

class StringAndStringBuffer {
    public static void main(String[] args) {
        String s = "Anik";
        s = s + " Chand";  // created new object but the old string Anik remains in the string pool
        System.out.println(s);
        
        StringBuffer sb = new StringBuffer("Anik");
        sb.append(" Chand");
        System.out.println(sb);  // changes the existing stringbuffer
        sb.reverse();
        System.out.println(sb);
    }
}