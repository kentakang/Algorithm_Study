package boj2530;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int hour = s.nextInt();
        int min = s.nextInt();
        int second = s.nextInt();
        int n = s.nextInt();
        second += n;

        if (second >= 60) {
            min += second / 60;
            second %= 60;
        }

        if (min >= 60) {
            hour += min / 60;
            min %= 60;
        }

        if (hour > 23)
            hour %= 24;


        System.out.println(hour + " " + min + " " + second);
    }
}
