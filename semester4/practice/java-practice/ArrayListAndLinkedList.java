import java.util.*;

class ArrayListAndLinkedList {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(10);
        arr.add(12);
        System.out.println(arr.get(0));
        System.out.println(arr);

        LinkedList<Integer> ll = new LinkedList<>();
        ll.add(10);
        ll.add(20);
        ll.addFirst(34);
        ll.addLast(23);
        System.out.println(ll);
    }
}