package boj1964;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        long n = s.nextLong();
        long sum = 1 + 4 * n + 3 * n * (n - 1) / 2;
        sum %= 45678;

        System.out.println(sum);
    }
}
