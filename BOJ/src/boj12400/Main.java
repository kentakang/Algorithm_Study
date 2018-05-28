package boj12400;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String translateList = "yhesocvxduiglbkrztnwjpfmaq";
        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n; i++) {
            String input = br.readLine();

            System.out.print("Case #" + (i + 1) + ": ");

            for (int j = 0; j < input.length(); j++) {
                int t = input.charAt(j);

                if (t >= 97) {
                    System.out.print(translateList.charAt(t - 97));
                } else {
                    System.out.print((char) t);
                }
            }

            System.out.print("\n");
        }
    }
}
