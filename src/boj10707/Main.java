package boj10707;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        int c = Integer.parseInt(br.readLine());
        int d = Integer.parseInt(br.readLine());
        int p = Integer.parseInt(br.readLine());
        int price1 = a * p;
        int price2 = b;

        if (c < p) {
            price2 = b;
            price2 += (p - c) * d;
        }

        if (price1 <= price2)
            System.out.println(price1);
        else
            System.out.println(price2);
    }
}
