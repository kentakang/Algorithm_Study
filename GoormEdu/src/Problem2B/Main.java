package Problem2B;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean isAscending = true;
        int n = scanner.nextInt();
        int[] data = new int[n];

        for (int i = 0; i < n; i++) {
            data[i] = scanner.nextInt();

            if (i != 0 && data[i - 1] > data[i]) {
                isAscending = false;
            }
        }

        System.out.printf("%s", isAscending ? "YES" : "NO");
    }
}
