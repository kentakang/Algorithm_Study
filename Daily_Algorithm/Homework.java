import java.util.HashSet;
import java.util.Scanner;
import java.util.Iterator;

public class Homework {
    public static void main(String[] args) {
        HashSet hs = new HashSet();
        Scanner s = new Scanner(System.in);

        for(int i = 0; i < 30; i++) {
            hs.add(i + 1);
        }

        for(int i = 1; i <= 28; i++) {
            int a = s.nextInt();
            hs.remove(a);
        }

        Iterator it = hs.iterator();
        while(it.hasNext()) {
            System.out.println(it.next());
        }
    }
}