package Problem2J;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] cup = new int[n];
        boolean canWin = false;
        long sum = 0;

        for (int i = 0; i < n; i++) {
            cup[i] = scanner.nextInt();
        }

        for (int i = 0; i < k - 1; i++) {
            sum += cup[i];
        }

        for (int i = 0; i + k - 1 < n; i++) {
            if (i > 0) {
                sum -= cup[i - 1];
            }

            sum += cup[i + k - 1];

            if (sum % 2 == 0) {
                canWin = true;
            }
        }

        System.out.println(canWin ? "YES" : "NO");
    }
}
