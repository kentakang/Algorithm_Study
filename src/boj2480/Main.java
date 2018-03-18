package boj2480;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = new int[3];
        int sum = 0;

        for (int i = 0; i < 3; i++)
            arr[i] = s.nextInt();

        if (arr[0] == arr[1] && arr[1] == arr[2])
            sum = 10000 + (arr[1] * 1000);
        else if ((arr[0] == arr[1] && arr[0] != arr[2]))
            sum = 1000 + (arr[0] * 100);
        else if (arr[0] == arr[2] && arr[0] != arr[1])
            sum = 1000 + (arr[0] * 100);
        else if (arr[1] == arr[2] && arr[0] != arr[1])
            sum = 1000 + (arr[1] * 100);
        else {
            int max = 0;

            for (int i = 0; i < 3; i++) {
                if (max < arr[i])
                    max = arr[i];
            }

            sum = max * 100;
        }

        System.out.println(sum);
    }
}
