package boj2592;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = new int[10];
        int[] num = new int[100];
        int sum = 0;
        int max = 0;

        for (int i = 0; i < 10; i++) {
            arr[i] = s.nextInt();
            sum += arr[i];
            num[(arr[i] / 10) - 1]++;
        }

        for (int i = 0; i < 100; i++)
            if (num[i] > num[max])
                max = i;

        System.out.println(sum / 10 + "\n" + (max + 1) * 10);
    }
}
