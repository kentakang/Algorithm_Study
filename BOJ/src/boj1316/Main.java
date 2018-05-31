package boj1316;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;
        String str = new String();

        for (int i = 0; i < n; i++) {
            str = br.readLine();
            int[] strCount = new int[26];
            boolean isGroup = true;

            for (int j = 0; j < str.length(); j++) {
                char ch = str.charAt(j);

                if (strCount[ch - 97] != 0 && str.charAt(j - 1) != ch) {
                    isGroup = false;
                    break;
                } else {
                    strCount[ch - 97]++;
                }
            }

            if (isGroup) {
                cnt++;
            }
        }

        System.out.println(cnt);
    }
}
