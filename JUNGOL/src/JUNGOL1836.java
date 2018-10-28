import java.util.Scanner;

public class JUNGOL1836 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        int max = 0;
        int sum = 0;
        int sum2 = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();

            if (sum + arr[i] >= sum2) {
                sum += arr[i];
            } else {
                sum = 0;
            }

            if (sum2 + arr[i] >= 0) {
                sum2 += arr[i];
            } else {
                sum2 = 0;
            }

            if (sum > sum2) {
                if (sum > max) {
                    max = sum;
                }
            } else {
                if (sum2 > max) {
                    max = sum2;
                }
            }
        }

        System.out.print(max);
    }
}
