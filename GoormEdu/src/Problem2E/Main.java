package Problem2E;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCase = scanner.nextInt();

        for (int i = 0; i < testCase; i++) {
            int input = scanner.nextInt();
            System.out.println("Case #" + (i + 1));
            System.out.print(isPrime(input) ? "YES" : "NO");

            if (i != (testCase - 1)) {
                System.out.print("\n");
            }
        }
    }

    static boolean isPrime(int n) {

        if (n == 1) {
            return false;
        }

        if (n % 2 == 0) {
            return (n == 2);
        }

        for (int i = 3; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
}
