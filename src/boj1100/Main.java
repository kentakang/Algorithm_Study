package boj1100;

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        char[][] arr = new char[8][8];
        int cnt = 0;

        for(int i = 0; i < 8; i++) {
            String str = br.readLine();

            for(int j = 0; j < 8; j++)
                arr[i][j] = str.charAt(j);
        }

        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(i == 0 || i % 2 == 0) {
                    if(j == 0 || j % 2 == 0) {
                        if(arr[i][j] == 'F')
                            cnt++;
                    }
                } else {
                    if(j % 2 != 0) {
                        if(arr[i][j] == 'F')
                            cnt++;
                    }
                }
            }
        }

        System.out.println(cnt);
    }
}
