package boj9095;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] inputArr = new int[n];
        int[] resultArr = new int[n];

        for (int i = 0; i < n; i++)
            inputArr[i] = s.nextInt();

        for (int i = 0; i < n; i++) {
            int num = inputArr[i];
            int[] dp = new int[num + 1];
            dp[0] = dp[1] = 1;
            if (num > 1)
                dp[2] = 2;

            for (int j = 3; j <= num; j++) {
                dp[j] += dp[j - 1];
                dp[j] += dp[j - 2];
                dp[j] += dp[j - 3];
            }

            resultArr[i] = dp[num];
        }

        for (int i = 0; i < n; i++)
            System.out.println(resultArr[i]);
    }
}
