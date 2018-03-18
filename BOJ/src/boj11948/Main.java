package boj11948;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] a = new int[4];
        int[] b = new int[2];
        int sum = 0;

        for (int i = 0; i < 4; i++) {
            a[i] = s.nextInt();
        }

        for (int i = 0; i < 2; i++) {
            b[i] = s.nextInt();
        }

        for (int i = 0; i < a.length - 1; i++) {
            for (int j = 0; j < a.length - 1; j++) {
                if (a[j] < a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < b.length - 1; i++) {
            for (int j = 0; j < b.length - 1; j++) {
                if (b[j] < b[j + 1]) {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < a.length - 1; i++) {
            sum += a[i];
        }

        for (int i = 0; i < b.length - 1; i++) {
            sum += b[i];
        }

        System.out.println(sum);
    }
}
