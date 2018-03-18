package boj2609;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer s = new StringTokenizer(br.readLine(), " ");
        int a = Integer.parseInt(s.nextToken());
        int b = Integer.parseInt(s.nextToken());
        int mod = a % b;
        int lcm = a * b;

        while (mod > 0) {
            a = b;
            b = mod;
            mod = a % b;
        }

        System.out.println(b);
        System.out.println(lcm / b);
    }
}
