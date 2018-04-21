import java.util.*;
import java.io.*;

public class OXQuiz {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for(int i = 0; i < n; i++) {
            String str = br.readLine();
            int score = 1, sum = 0;
            for(int j = 0; j < str.length(); j++) {
                if(str.charAt(j) == 'O') {
                    sum += score;
                    score++;
                }
                else if(str.charAt(j) == 'X')
                    score = 1;
            }
            System.out.println(sum);
        }
    }
}