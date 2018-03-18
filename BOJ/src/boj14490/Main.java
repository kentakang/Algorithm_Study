package boj14490;

import java.io.*;
import java.util.*;

public class Main {
    static int GCD(int num1, int num2) {
        if (num2 == 0) return num1;
        return GCD(num2, num1 % num2);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), ":");
        int num1 = Integer.parseInt(st.nextToken());
        int num2 = Integer.parseInt(st.nextToken());
        int gcd = GCD(num1, num2);

        System.out.println(num1 / gcd + ":" + num2 / gcd);
    }
}
