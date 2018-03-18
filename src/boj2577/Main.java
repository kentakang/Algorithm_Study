package boj2577;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] cnt = new int[10];
        int a = Integer.parseInt(br.readLine().trim());
        int b = Integer.parseInt(br.readLine().trim());
        int c = Integer.parseInt(br.readLine().trim());
        String sum = Integer.toString(a * b * c);

        for (int i = 0; i < sum.length(); i++) {
            cnt[sum.charAt(i) - 48]++;
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(cnt[i]);
        }
    }
}
