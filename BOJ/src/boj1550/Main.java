package boj1550;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String n = br.readLine();

        System.out.println(Integer.parseInt(n, 16));
    }
}
