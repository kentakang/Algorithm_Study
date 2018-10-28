import java.util.Scanner;

public class JUNGOL1339 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        char[][] arr;

        if (n % 2 != 0 && n >= 1 && n <= 100) {
            arr = Solution(n);

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.printf("%c ", arr[i][j]);
                }

                System.out.print("\n");
            }
        } else {
            System.out.println("INPUT ERROR");
        }
    }

    public static char[][] Solution(int n) {
        char ch = 'A';
        char[][] arr = new char[n][n];

        for (int i = n / 2; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (j >= i && j <= (n / 2) * 2 - i) {
                    arr[j][i] = ch++;

                    if (ch == '[') {
                        ch = 'A';
                    }
                } else {
                    arr[j][i] = ' ';
                }
            }
        }

        return arr;
    }
}
