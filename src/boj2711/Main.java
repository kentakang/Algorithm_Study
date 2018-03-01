package boj2711;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        for (int i = 0; i < t; i++) {
            StringTokenizer s = new StringTokenizer(br.readLine(), " ");
            int idx = Integer.parseInt(s.nextToken());
            String str = s.nextToken();
            StringBuffer sb = new StringBuffer(str);

            sb.deleteCharAt(idx - 1);
            System.out.println(sb);
        }
    }
}
