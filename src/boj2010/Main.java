package boj2010;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += s.nextInt() - 1;
        }

        System.out.println(sum + 1);
    }
}
