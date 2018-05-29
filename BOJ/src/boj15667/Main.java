package boj15667;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        n -= 1;

        for (int i = 1; i <= n; i++) {
            if ((i * i + i) == n) {
                System.out.println(i);
                break;
            }
        }
    }
}
