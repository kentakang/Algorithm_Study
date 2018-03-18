package boj1748;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;

        for(int i = 1; i <= n; i *= 10)
            cnt += (n - i) + 1;

        System.out.println(cnt);
    }
}
