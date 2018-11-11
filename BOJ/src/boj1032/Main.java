package boj1032;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(bufferedReader.readLine());
        String[] arr = new String[n];
        String result = "";

        for (int i = 0; i < n; i++) {
            arr[i] = bufferedReader.readLine();
        }

        for (int i = 1; i < n; i++) {
            String comp = compString(arr[i - 1], arr[i]);

            if (!comp.equals(result)) {
                result = comp;
            }
        }

        System.out.println(result);
    }

    static String compString(String str1, String str2) {
        String result = "";

        for (int i = 0; i < str1.length(); i++) {
            if (str1.charAt(i) == str2.charAt(i)) {
                result += str1.charAt(i);
            } else {
                result += "?";
            }
        }

        return result;
    }
}
