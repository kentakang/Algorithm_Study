package boj2460;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int sum = 0;
        int max = 0;

        for (int i = 0; i < 10; i++) {
            sum -= s.nextInt();
            sum += s.nextInt();

            if (sum > max)
                max = sum;
        }

        System.out.println(max);
    }
}
