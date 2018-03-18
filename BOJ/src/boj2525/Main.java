package boj2525;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int hour = s.nextInt();
        int min = s.nextInt();
        int n = s.nextInt();

        min += n;
        if (min > 59) {
            hour += (min / 60);
            min %= 60;
        }

        if (hour > 23)
            hour %= 24;

        System.out.println(hour + " " + min);
    }
}
