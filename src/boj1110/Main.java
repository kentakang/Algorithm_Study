package boj1110;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int number = s.nextInt();
        int cnt = 0;
        int a = number;
        do {
            cnt++;
            a = (a % 10) * 10 + (a / 10 + a % 10) % 10;
        } while (number != a);

        System.out.println(cnt);
    }
}
