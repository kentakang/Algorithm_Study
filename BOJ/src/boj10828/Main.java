package boj10828;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    private int top = -1;
    private int[] stack = new int[10000];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Main stack = new Main();
        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n; i++) {
            String command = br.readLine();

            if (command.contains("push")) {
                int num = Integer.parseInt(command.substring(5));
                stack.push(num);
            } else {
                switch (command) {
                    case "pop":
                        System.out.println(stack.pop());
                        break;
                    case "size":
                        System.out.println(stack.size());
                        break;
                    case "empty":
                        System.out.println(stack.empty());
                        break;
                    case "top":
                        System.out.println(stack.top());
                        break;
                }
            }
        }
    }

    void push(int n) {
        stack[++top] = n;
    }

    int pop() {
        if (top == -1)
            return -1;
        else
            return stack[top--];
    }

    int size() {
        return top + 1;
    }

    int empty() {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int top() {
        if (top == -1)
            return -1;

        return stack[top];
    }
}
