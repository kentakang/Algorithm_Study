package Problem2I;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] data = new int[scanner.nextInt()];

        for (int i = 0; i < data.length; i++) {
            data[i] = scanner.nextInt();
        }

        System.out.print(isConsecutive(data) ? "YES" : "NO");
    }

    static boolean isConsecutive(int[] data) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        for (int i = 0; i < data.length; i++) {
            if (min > data[i]) {
                min = data[i];
            }

            if (max < data[i]) {
                max = data[i];
            }
        }

        if (max - min == data.length - 1) {
            return true;
        } else {
            return false;
        }
    }
}
