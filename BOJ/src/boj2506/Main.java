package boj2506;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int sum = 0;
        int cnt = 1;

        for (int i = 0; i < n; i++) {
            int answer = s.nextInt();

            if (answer == 1) {
                sum += cnt;
                cnt++;
            } else {
                cnt = 1;
            }
        }

        System.out.println(sum);
    }
}
