package boj2864;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        String strA = Integer.toString(a);
        String strB = Integer.toString(b);
        int min = Integer.parseInt(strA.replace("6", "5")) + Integer.parseInt(strB.replace("6", "5"));
        int max = Integer.parseInt(strA.replace("5", "6")) + Integer.parseInt(strB.replace("5", "6"));

        System.out.println(min + " " + max);
    }
}
