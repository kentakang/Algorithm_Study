package boj11365;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String decode = "";

        while (true) {
            String str = s.nextLine();

            if (str.equals("END"))
                break;

            for (int i = str.length() - 1; i >= 0; i--)
                decode += str.charAt(i);

            decode += "\n";
        }

        System.out.print(decode);
    }
}
