package boj5622;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String dial = br.readLine();
        int time = 0;

        for (int i = 0; i < dial.length(); i++) {
            char ch = dial.charAt(i);
            int num = 0;

            switch(ch) {
                case 'A':
                case 'B':
                case 'C':
                    num = 2;
                    break;
                case 'D':
                case 'E':
                case 'F':
                    num = 3;
                    break;
                case 'G':
                case 'H':
                case 'I':
                    num = 4;
                    break;
                case 'J':
                case 'K':
                case 'L':
                    num = 5;
                    break;
                case 'M':
                case 'N':
                case 'O':
                    num = 6;
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    num = 7;
                    break;
                case 'T':
                case 'U':
                case 'V':
                    num = 8;
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    num = 9;
                    break;
            }

            time += num + 1;
        }

        System.out.println(time);
    }
}
