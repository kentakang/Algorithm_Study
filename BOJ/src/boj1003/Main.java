package boj1003;

import java.util.Scanner;

public class Main {
    static int cnt1 = 0;
    static int cnt2 = 0;

    public static int fibonacci(int n) {
        if (n == 0) {
            cnt1++;
            return 0;
        }
        else if (n == 1) {
            cnt2++;
            return 1;
        }
        else {
            return fibonacci(n - 1) + fibonacci(n -2);
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        for(int i = 0; i < n; i++) {
            fibonacci(s.nextInt());
            System.out.println(cnt1 + " " + cnt2);
            cnt1 = 0;
            cnt2 = 0;
        }
    }
}
