package boj1002;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int r1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());
            int r2 = Integer.parseInt(st.nextToken());
            double a = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

            if (x1 == x2 && y1 == y2) {
                if (r1 == r2)
                    System.out.println(-1);
                else
                    System.out.println(0);
            } else {
                if((r1 + r2) > a && Math.abs(r1 - r2) < a)
                    System.out.println(2);
                else if((r1 + r2) == a || Math.abs(r1 - r2) == a)
                    System.out.println(1);
                else
                    System.out.println(0);
            }
        }
    }
}
