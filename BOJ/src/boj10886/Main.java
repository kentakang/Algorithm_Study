package boj10886;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int input = Integer.parseInt(br.readLine());
            if (input == 1)
                sum++;
        }

        if (n - sum < sum)
            System.out.println("Junhee is cute!");
        else
            System.out.println("Junhee is not cute!");
    }
}
