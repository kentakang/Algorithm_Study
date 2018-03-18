package boj11021;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        for (int i = 0; i < n; i++) {
            int a = Integer.parseInt(s.next());
            int b = Integer.parseInt(s.next());

            System.out.println("Case #" + (i + 1) + ": " + (a + b));
        }
    }
}
