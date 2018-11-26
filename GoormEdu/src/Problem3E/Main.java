package Problem3E;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int testCase = Integer.parseInt(br.readLine());

        for (int a = 0; a < testCase; a++) {
            int[][] paper = new int[100][100];
            int n = Integer.parseInt(br.readLine());
            int cnt = 0;

            for (int x = 0; x < n; x++) {
                StringTokenizer st = new StringTokenizer(br.readLine(), " ");
                int left = Integer.parseInt(st.nextToken());
                int bottom = Integer.parseInt(st.nextToken());

                for (int i = left; i < left + 10; i++) {
                    for (int j = bottom; j < bottom + 10; j++) {
                        paper[i][j] = 1;
                    }
                }
            }

            for (int i = 0; i < paper.length; i++) {
                for (int j = 0; j < paper.length; j++) {
                    if (paper[i][j] == 1)
                        cnt++;
                }
            }

            System.out.println(cnt);
        }
    }
}