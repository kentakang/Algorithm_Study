package boj13717;

import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;
        int cntMax = 0;
        String cntMaxPokemon = "";

        for (int i = 0; i < n; i++) {
            String pokemon = br.readLine();
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int k = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());
            int insideCnt = 0;

            for (int j = 0; j < m; j += k) {
                if (j + k <= m) {
                    insideCnt++;
                    j -= 2;
                }
            }

            cnt += insideCnt;
            if (insideCnt > cntMax) {
                cntMax = insideCnt;
                cntMaxPokemon = pokemon;
            }
        }

        System.out.println(cnt);
        System.out.println(cntMaxPokemon);
    }
}
