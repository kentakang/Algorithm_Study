package boj1157;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        int cnt[][] = new int[26][2];

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch >= 97) {
                cnt[ch - 97][0] = ch - 32;
                cnt[ch - 97][1]++;
            } else {
                cnt[ch - 65][0] = ch;
                cnt[ch - 65][1]++;
            }
        }

        for (int i = 0; i < cnt.length - 1; i++) {
            for (int j = 0; j < cnt.length - 1; j++) {
                if (cnt[j][1] < cnt[j + 1][1]) {
                    int temp1 = cnt[j][0];
                    int temp2 = cnt[j][1];

                    cnt[j][0] = cnt[j + 1][0];
                    cnt[j][1] = cnt[j + 1][1];

                    cnt[j + 1][0] = temp1;
                    cnt[j + 1][1] = temp2;
                }
            }
        }

        if (cnt[0][1] == cnt[1][1]) {
            System.out.println("?");
        } else {
            System.out.println((char) cnt[0][0]);
        }
    }
}
