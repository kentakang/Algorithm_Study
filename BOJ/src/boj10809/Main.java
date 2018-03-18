package boj10809;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        for (char i = 'a'; i <= 'z'; i++) {
            System.out.print(str.indexOf(i) + " ");
        }
    }
}
