package Problem2A;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int acornCount = scanner.nextInt();
        int[] acornHeight = new int[acornCount];
        int[] acornBirth = new int[acornCount];
        int maxAcorn = -1;

        for (int i = 0; i < acornCount; i++) {
            acornHeight[i] = scanner.nextInt();
        }

        for (int i = 0; i < acornCount; i++) {
            acornBirth[i] = scanner.nextInt();
        }

        int thisMonth = scanner.nextInt();

        for (int i = 0; i < acornCount; i++) {
            if (acornBirth[i] == thisMonth && acornHeight[i] > maxAcorn) {
                maxAcorn = acornHeight[i];
            }
        }

        System.out.print(maxAcorn);
    }
}
