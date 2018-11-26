package Problem3A;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] phoneNumber = new int[10000];
        int frequentNum = 0;
        int frequentTimes = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            phoneNumber[scanner.nextInt()]++;
        }

        for (int i = 0; i < phoneNumber.length; i++) {
            if (phoneNumber[i] > frequentTimes) {
                frequentNum = i;
                frequentTimes = phoneNumber[i];
            }
        }

        System.out.printf("%04d", frequentNum);
    }
}
