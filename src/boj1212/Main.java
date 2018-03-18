package boj1212;

import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();
        char octal[] = str.toCharArray();
        int n = octal.length;
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < n; i++) {
            String a = Integer.toBinaryString((int) octal[i] - 48);
            if ((n - i) < n) a = radix(a);
            sb.append(a);
        }

        System.out.println(sb.toString());
    }

    static String radix(String r) {
        int n = r.length();
        if (n < 3) {
            r = "00" + r;
            n = r.length();
            return r.substring(n - 3, n);
        } else
            return r;
    }
}

