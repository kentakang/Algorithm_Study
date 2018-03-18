package boj5032;

import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int e = Integer.parseInt(st.nextToken());
        int f = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());
        int cnt = 0;
        e += f;

        while (e >= c) {
            e -= c;
            cnt++;
            e++;
        }

        System.out.println(cnt);
    }
}
