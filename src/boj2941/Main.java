package boj2941;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        str = str.replaceAll("c=|c-|dz=|d-|lj|nj|s=|z=", "s");

        System.out.println(str.length());
    }
}
