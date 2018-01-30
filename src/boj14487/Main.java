package boj14487;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int maxNum = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int a = Integer.parseInt(st.nextToken());

            sum += a;
            if (a >= maxNum)
                maxNum = a;
        }

        System.out.println(sum - maxNum);
    }
}
