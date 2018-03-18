package boj4435;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] gandalf = {1, 2, 3, 3, 4, 10};
        int[] sauron = {1, 2, 2, 2, 3, 5, 10};
        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            int gScore = 0;
            int sScore = 0;
            StringTokenizer g = new StringTokenizer(br.readLine(), " ");

            for(int j = 0; j < 6; j++)
                gScore += Integer.parseInt(g.nextToken()) * gandalf[j];

            StringTokenizer s = new StringTokenizer(br.readLine(), " ");

            for(int j = 0; j < 7; j++)
                sScore += Integer.parseInt(s.nextToken()) * sauron[j];


            if(gScore < sScore)
                System.out.println("Battle " + (i + 1) + ": Evil eradicates all trace of Good");
            else if(sScore < gScore)
                System.out.println("Battle " + (i + 1) + ": Good triumphs over Evil");
            else
                System.out.println("Battle " + (i + 1) + ": No victor on this battle field");
        }
    }
}
