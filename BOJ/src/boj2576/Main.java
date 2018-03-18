package boj2576;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = new int[7];
        int sum = 0;
        int min = 100;

        for (int i = 0; i < 7; i++)
            arr[i] = s.nextInt();

        for (int i = 0; i < 7; i++) {
            if (arr[i] % 2 != 0) {
                sum += arr[i];
                if (min > arr[i])
                    min = arr[i];
            }
        }

        if (sum != 0)
            System.out.print(sum + "\n" + min);
        else
            System.out.println("-1");
    }
}
