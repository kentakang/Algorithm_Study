package boj1978;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(st.nextToken());
            int count = 0;

            if (num == 1)
                continue;

            for (int j = 1; j <= num; j++) {
                if (num % j == 0)
                    count++;
            }

            if (count <= 2)
                cnt++;
        }

        System.out.println(cnt);
    }
}
