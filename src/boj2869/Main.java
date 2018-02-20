package boj2869;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int v = s.nextInt();
        int n = 0;
        int cnt = 0;

        while (true) {
            n += a;
            cnt++;

            if (n >= v)
                break;
            else
                n -= b;
        }

        System.out.println(cnt);
    }
}
