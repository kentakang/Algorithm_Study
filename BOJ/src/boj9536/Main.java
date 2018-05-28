package boj9536;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n; i++) {
            ArrayList<String> record = new ArrayList<String>();
            ArrayList<String> removeList = new ArrayList<String>();
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            String input = "";

            while (st.hasMoreTokens()) {
                record.add(st.nextToken());
            }

            while (!input.equals("what does the fox say?")) {
                input = br.readLine();
                st = new StringTokenizer(input, " ");

                st.nextToken();
                st.nextToken();
                removeList.add(st.nextToken());
            }

            record.removeAll(removeList);

            for (String owl: record) {
                System.out.print(owl + " ");
            }
        }
    }
}
