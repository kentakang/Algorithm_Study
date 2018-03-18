package boj9325;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        for (int i = 0; i < n; i++) {
            int sum = s.nextInt();
            int t = s.nextInt();

            for (int j = 0; j < t; j++) {
                int q = s.nextInt();
                int p = s.nextInt();

                sum += q * p;
            }

            System.out.println(sum);
        }
    }
}
