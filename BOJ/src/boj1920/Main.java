package boj1920;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = s.nextInt();

        int m = s.nextInt();

        for (int i = 0; i < m; i++) {
            int num = s.nextInt();
            int isNuminArr = 0;

            for (int j = 0; j < arr.length; j++) {
                if (arr[j] == num) {
                    isNuminArr++;
                    break;
                }
            }

            System.out.println(isNuminArr);
        }
    }
}
