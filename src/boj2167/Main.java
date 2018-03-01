package boj2167;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();
        int k;
        int[][] arr = new int[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                arr[i][j] = s.nextInt();
        }

        k = s.nextInt();

        for (int a = 0; a < k; a++) {
            int i = s.nextInt();
            int j = s.nextInt();
            int x = s.nextInt();
            int y = s.nextInt();
            int sum = 0;

            for (int b = i - 1; b < x; b++) {
                for (int c = j - 1; c < y; c++)
                    sum += arr[b][c];
            }

            System.out.println(sum);
        }
    }
}
