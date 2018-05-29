package boj15813;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String name = br.readLine();
        int score = 0;

        for (int i = 0; i < n; i++) {
            score += name.charAt(i) - 64;
        }

        System.out.println(score);
    }
}
