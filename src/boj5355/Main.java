package boj5355;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            float num = Float.parseFloat(st.nextToken());

            while(st.hasMoreTokens()) {
                String operator = st.nextToken();

                if(operator.equals("@"))
                    num *= 3;
                else if(operator.equals("%"))
                    num += 5;
                else if(operator.equals("#"))
                    num -= 7;
            }

            System.out.format("%.2f\n", num);
        }
    }
}
