package boj1065;

import java.util.Scanner;

public class Main {
    static boolean checkNumber(int n) {
        if(n < 100)
            return true;
        else if(n == 1000)
            return false;

        int num;
        int diff;
        num = n % 10;
        n /= 10;
        diff = (n % 10) - num;

        if ((n / 10) - (n % 10) == diff)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (checkNumber(i))
                cnt++;
        }

        System.out.println(cnt);
    }
}
