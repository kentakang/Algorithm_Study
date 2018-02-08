package boj3986;

import java.util.Stack;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int count = 0;

        for (int i = 0; i < n; i++) {
            Stack<Character> stack = new Stack();
            String str = br.readLine();

            for (int j = 0; j < str.length(); j++) {
                if (!stack.isEmpty()) {
                    if (stack.peek() == str.charAt(j)) {
                        stack.pop();
                    } else {
                        stack.push(str.charAt(j));
                    }
                } else {
                    stack.push(str.charAt(j));
                }
            }

            if (stack.isEmpty())
                count++;
        }

        System.out.println(count);
    }
}
