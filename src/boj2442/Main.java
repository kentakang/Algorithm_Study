package boj2442;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= (n - i); j++)
                System.out.print(" ");

            for(int j = 1; j <= (i * 2) - 1; j++)
                System.out.print("*");

            System.out.print("\n");
        }
    }
}
