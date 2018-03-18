package boj1712;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

        if (c - b <= 0)
            System.out.println("-1");
        else
            System.out.println(a / (c - b) + 1);
    }
}
