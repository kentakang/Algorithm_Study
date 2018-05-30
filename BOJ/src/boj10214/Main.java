package boj10214;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());

        for (int i = 0; i < testCase; i++) {
            int yonsei = 0;
            int korea = 0;

            for (int j = 0; j < 9; j++) {
                StringTokenizer st = new StringTokenizer(br.readLine(), " ");

                yonsei += Integer.parseInt(st.nextToken());
                korea += Integer.parseInt(st.nextToken());
            }

            if (yonsei > korea) {
                System.out.println("Yonsei");
            } else if (korea > yonsei) {
                System.out.println("Korea");
            } else {
                System.out.println("Draw");
            }
        }
    }
}
