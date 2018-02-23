package boj1188;

import java.util.Scanner;

public class Main {
    static int gcd(int a, int b) {
        if (b == 0)
            return a;

        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();

        System.out.println(m - gcd(n , m));
    }
}
