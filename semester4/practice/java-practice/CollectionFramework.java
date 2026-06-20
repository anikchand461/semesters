import java.util.*;

class CollectionFramework {
    public static void main(String[] args) {
        
        List<String> list = new ArrayList<>();
        list.add("Hello"); list.add("Anik");
        System.out.println(list);
        Collections.sort(list);
        System.out.println(list);

        Set<Integer> set = new HashSet<>();
        set.add(9); set.add(4); 
        System.out.println(set);

        Map<String, Integer> map = new HashMap<>();
        map.put("anik", 1);
        map.put("chand", 2);
        System.out.println(map);
        System.out.println(map.get("anik"));
        
    }
}