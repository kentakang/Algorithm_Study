package Problem0C;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.print("Hello World!" + (i != n -1 ? "\n" : ""));
        }
    }
}
