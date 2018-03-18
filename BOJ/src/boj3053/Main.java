package boj3053;

import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        DecimalFormat d = new DecimalFormat("0.000000");
        int r = s.nextInt();

        System.out.println(d.format(r * r * Math.PI));
        System.out.println(d.format(r * r * 2));
    }
}
