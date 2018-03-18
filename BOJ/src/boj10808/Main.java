package boj10808;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();
        int[] arr = new int[26];

        for (int i = 0; i < str.length(); i++) {
            arr[str.charAt(i) - 97]++;
        }

        for (int i = 0; i < 26; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
