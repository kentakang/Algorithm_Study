package boj2752;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = new int[3];

        for (int i = 0; i < 3; i++)
            arr[i] = s.nextInt();

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < 3; i++)
            System.out.print(arr[i] + " ");
    }
}
