import java.util.*;
import java.io.*;

public class JunoisBirdHater {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[][] arr = new int[n][m];
        int maxCnt = 0;
        int sumCnt = 0;

        for(int i = 0; i < n; i++) {
            StringTokenizer hitInput = new StringTokenizer(br.readLine(), " ");

            for(int j = 0; j < m; j++)
                arr[i][j] = Integer.parseInt(hitInput.nextToken());
        }

        for(int i = 0; i < n; i++) {
            int cnt = 0;
            
            for(int j = 0; j < m; j++) {
                int num = arr[i][j];
                while(num != 0) {
                    if(num % 10 == 9)
                    {
                        cnt++;
                        sumCnt++;
                    }
                    num /= 10;
                }
            }

            if(maxCnt < cnt)
                maxCnt = cnt;
        }

        for(int i = 0; i < m; i++) {
            int cnt = 0;

            for(int j = 0; j < n; j++) {
                int num = arr[j][i];
                while(num != 0) {
                    if(num % 10 == 9)
                        cnt++;
                    num /= 10;
                }
            }
            
            if(maxCnt < cnt)
                maxCnt = cnt;
        }

        System.out.println(sumCnt - maxCnt);
    }
}