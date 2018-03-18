import java.util.Scanner;

public class Aaah {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String a = s.nextLine();
        String b = s.nextLine();

        a = a.replaceAll("h", "");
        b = b.replaceAll("h", "");
        if(a.length() < b.length())
            System.out.println("no");
        else
            System.out.println("go");
    }
}