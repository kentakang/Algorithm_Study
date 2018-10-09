import java.util.Scanner;

public class JUNGOL1402 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cnt++;

                if (cnt == k) {
                    System.out.println(i);
                }
            }
        }

        if (cnt < k) {
            System.out.println("0");
        }
    }
}
