package boj2753;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        boolean isLeap = false;

        if (a % 4 == 0) {
            if (a % 100 == 0) {
                if (a % 400 == 0)
                    isLeap = true;
                else
                    isLeap = false;
            }
            else
                isLeap = true;
        } else
            isLeap = false;

        System.out.println(isLeap ? 1 : 0);
    }
}
