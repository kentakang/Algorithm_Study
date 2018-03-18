package boj7572;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        n += 56;
        n %= 60;

        System.out.println((char) (n % 12 + 65) + "" + n % 10);
    }
}