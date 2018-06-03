package boj2775;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int testCase = s.nextInt();
        int floor[][] = new int[15][14];

        for (int i = 0; i < 14; i++)
            floor[0][i] = i + 1;

        for (int i = 0; i < testCase; i++) {
            int k = s.nextInt();
            int n = s.nextInt();

            if (floor[k][0] == 0) {
                for (int j = 1; j <= k; j++) {
                    for (int l = 0; l < n; l++) {
                        int sum = 0;

                        for (int m = 0; m <= l; m++)
                            sum += floor[j - 1][m];

                        floor[j][l] = sum;
                    }
                }
            }

            System.out.println(floor[k][n - 1]);
        }
    }
}
