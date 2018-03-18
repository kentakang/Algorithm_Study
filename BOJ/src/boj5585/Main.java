package boj5585;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = {500, 100, 50, 10, 5, 1};
        int n = 1000 - s.nextInt();
        int cnt = 0;
        int idx = 0;

        while (true) {
            int money = n / arr[idx];
            cnt = cnt + money;

            if (money == 0) {
                idx++;
                continue;
            }

            n = n % arr[idx];
            if (n == 0)
                break;
        }

        System.out.println(cnt);
    }
}
