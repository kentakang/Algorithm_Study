package boj2908;

import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        String a = st.nextToken();
        String b = st.nextToken();
        int c = Integer.parseInt(new StringBuffer(a).reverse().toString());
        int d = Integer.parseInt(new StringBuffer(b).reverse().toString());

        if (c < d)
            System.out.println(d);
        else
            System.out.println(c);
    }
}
