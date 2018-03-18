package boj2501;

import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int getAnswer(int n, int k) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                --k;
                if (k == 0)
                    return i;
            }
        }

        return 0;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer s = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(s.nextToken());
        int k = Integer.parseInt(s.nextToken());

        System.out.println(getAnswer(n, k));
    }
}
