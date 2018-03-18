package boj2446;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        for (int i = n; i > 0; i--) {
            for (int j = 0; j < ((2 * n - 1) - (2 * i - 1)) / 2; j++)
                System.out.print(" ");
            for (int j = 0; j < 2 * i - 1; j++)
                System.out.print("*");

            System.out.print("\n");
        }

        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < ((2 * n - 1) - (2 * i - 1)) / 2; j++)
                System.out.print(" ");
            for (int j = 0; j < 2 * i - 1; j++)
                System.out.print("*");

            System.out.print("\n");
        }
    }
}