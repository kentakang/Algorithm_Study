package boj2523;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)
                System.out.print("*");
            System.out.print("\n");
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++)
                System.out.print("*");
            System.out.print("\n");
        }
    }
}
