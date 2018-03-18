package boj5598;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) - 3 < 65)
                System.out.print((char) (str.charAt(i) + 23));
            else
                System.out.print((char) (str.charAt(i) - 3));
        }
    }
}
