import java.util.Scanner;

public class JUNGOL1102 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        Stack stack = new Stack(n);

        for (int i = 0; i < n; i++) {
            String command = scanner.nextLine();

            if (command.equals("c")) {
                System.out.println(stack.peek());
            } else if (command.equals("o")) {
                System.out.println(stack.pop());
            } else {
                stack.push(Integer.parseInt(command.substring(2)));
            }
        }
    }
}

class Stack {
    private int size;
    private int top = -1;
    private int[] arr;

    public Stack(int size) {
        this.size = size;
        this.arr = new int[size];
    }

    public void push(int n) {
        this.arr[++top] = n;
    }

    public String pop() {
        if (top == -1) {
            return "empty";
        } else {
            return String.valueOf(arr[top--]);
        }
    }

    public int peek() {
        return top + 1;
    }
}
