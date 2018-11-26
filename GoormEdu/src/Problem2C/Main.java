package Problem2C;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] posterType = new int[n];
        int posterCount = 0;

        for (int i = 0; i < n; i++) {
            boolean isNotDuplicate = true;
            posterType[i] = scanner.nextInt();

            if (i != 0) {
                for (int j = i - 1; j >= 0; j--) {
                    if (posterType[j] == posterType[i]) {
                        isNotDuplicate = false;
                        break;
                    }
                }
            }

            if (isNotDuplicate) {
                posterCount++;
            }
        }

        System.out.print(posterCount);
    }
}
