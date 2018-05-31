package boj10250;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int testCase = s.nextInt();

        for (int i = 0; i < testCase; i++) {
            int h = s.nextInt();
            int w = s.nextInt();
            int n = s.nextInt();
            int room = 1;

            while (n > h) {
                n -= h;
                room += 1;
            }

            room += n * 100;

            System.out.println(room);
        }
    }
}
