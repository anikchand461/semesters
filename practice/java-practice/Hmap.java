import java.util.*;

class Hmap {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();
        map.put("a", 4);
        map.put("b", 5);
        map.put(null, 2);
        System.out.println(map.get(null));
        System.out.println(map);
        System.out.println(map.containsKey("a"));
    }
}