package boj2581;

import java.util.Scanner;

public class Main {
    static boolean checkPrime(int n) {
        int num = (int) Math.sqrt((double) n);

        if (n < 2)
            return false;

        for (int i = 2; i < num + 1; i++)
            if (n % i == 0)
                return false;

        return true;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int m = s.nextInt();
        int n = s.nextInt();
        int sum = 0;
        int min = n;

        for (int i = m; i <= n; i++) {
            if (checkPrime(i)) {
                sum += i;
                if (min > i)
                    min = i;
            }
        }

        if (sum == 0)
            System.out.println("-1");
        else
            System.out.println(sum + "\n" + min);
    }
}
