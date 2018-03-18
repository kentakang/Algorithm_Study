package boj10818;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int max = -1000000;
        int min = 1000000;
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(st.nextToken());

            if (num > max)
                max = num;
            else if (num < min)
                min = num;
        }

        System.out.println(min + " " + max);
    }
}
