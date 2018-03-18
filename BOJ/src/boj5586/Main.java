package boj5586;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();
        int joiCnt = 0;
        int ioiCnt = 0;

        for (int i = 0; i < str.length() - 1; i++) {
            if (str.charAt(i) == 'J' && str.charAt(i + 1) == 'O' && str.charAt(i + 2) == 'I')
                joiCnt++;
            else if (str.charAt(i) == 'I' && str.charAt(i + 1) == 'O' && str.charAt(i + 2) == 'I')
                ioiCnt++;
        }

        System.out.println(joiCnt);
        System.out.println(ioiCnt);
    }
}
