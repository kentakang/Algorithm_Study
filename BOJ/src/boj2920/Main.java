package boj2920;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int count = 0;
        int[] arr = new int[8];

        for (int i = 0; i < 8; i++) {
            arr[i] = s.nextInt();

            if (i != 0) {
                if (arr[i] > arr[i - 1]) {
                    count++;
                } else {
                    count--;
                }
            } else {
                count++;
            }
        }

        if (count == 8) {
            System.out.println("ascending");
        } else if (count == -6) {
            System.out.println("descending");
        } else {
            System.out.println("mixed");
        }
    }
}
