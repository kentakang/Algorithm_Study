package Problem0D;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = 0; j < 3; j++) {
                sum += scanner.nextInt();
            }

            System.out.printf("Case #%d\n%d", i + 1, sum);

            if (i != n -1) {
                System.out.print("\n");
            }
        }
    }
}
