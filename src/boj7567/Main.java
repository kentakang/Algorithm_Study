package boj7567;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();
        int cnt = 0;
        int sum = 0;

        for (int i = 0; i < str.length(); i++) {
            if (i == 0)
            {
                sum += 10;
                continue;
            }

            if (str.charAt(i - 1) == '(') {
                if (str.charAt(i) == '(')
                    sum += 5;
                else
                    sum += 10;
            } else {
                if (str.charAt(i) == '(')
                    sum += 10;
                else
                    sum += 5;
            }
        }

        System.out.println(sum);
    }
}
