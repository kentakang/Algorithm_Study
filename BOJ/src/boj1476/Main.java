package boj1476;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws InterruptedException {
        Scanner s = new Scanner(System.in);
        int E = s.nextInt();
        int S = s.nextInt();
        int M = s.nextInt();
        int a = 0;
        int b = 0;
        int c = 0;
        int cnt = 0;

        while (E != a || S != b || M != c) {
            a = cnt % 15 + 1;
            b = cnt % 28 + 1;
            c = cnt % 19 + 1;
            cnt++;
        }

        System.out.println(cnt);
    }
}
