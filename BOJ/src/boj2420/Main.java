package boj2420;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        long a = s.nextLong();
        long b = s.nextLong();

        System.out.println(Math.abs(a - b));
    }
}
