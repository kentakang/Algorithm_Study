import java.util.Scanner;

public class codeup5134 {
    static String f(int n) {
        if (n == 0)
            return "a";
        if (n == 1)
            return "b";
        if (n == 2)
            return "c";

        return f(n - 1) + f(n - 2) + f(n - 3);
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();

        try {
            System.out.println(f(n).charAt(k - 1));
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println("-1");
        }
    }
}