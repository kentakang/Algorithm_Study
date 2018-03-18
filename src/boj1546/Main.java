package boj1546;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int maxNum = 0;
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        double sum = 0;
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i = 0; i < n; i++) {
            int input = Integer.parseInt(st.nextToken());
            arr[i] = input;

            if (input > maxNum)
                maxNum = input;
        }

        for (int i = 0; i < n; i++) {
            sum += (double)arr[i] / (double)maxNum * 100.0;
        }

        System.out.println(sum / n);
    }
}
