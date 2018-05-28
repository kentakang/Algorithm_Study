package boj5026;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());

        for (int i = 0 ; i < testCase; i++) {
            String input = br.readLine();

            if (input.contains("+")) {
                StringTokenizer st = new StringTokenizer(input, "+");
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());

                System.out.println(a + b);
            } else {
                System.out.println("skipped");
            }
        }
    }
}
