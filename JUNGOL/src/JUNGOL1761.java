import java.util.Scanner;

public class JUNGOL1761 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int cnt = 0;
        int[] num = new int[n];
        int[] strike = new int[n];
        int[] ball = new int[n];
        int[] arr = new int[3];
        int[] arr2 = new int[3];

        for (int i = 0; i < n; i++) {
            num[i] = scanner.nextInt();
            strike[i] = scanner.nextInt();
            ball[i] = scanner.nextInt();
        }

        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                for (int k = 1; k <= 9; k++) {
                    if (i != j && j != k && k != i) {
                        arr[0] = i;
                        arr[1] = j;
                        arr[2] = k;
                        int tempCount = 0;

                        for (int a = 0; a < n; a++) {
                            int temp = num[a];
                            int tempStrike = 0;
                            int tempBall = 0;

                            arr2[0] = temp / 100;
                            temp %= 100;

                            arr2[1] = temp / 10;
                            arr2[2] = temp % 10;

                            for (int b = 0; b < 3; b++) {
                                for (int c = 0; c < 3; c++) {
                                    if (arr[b] == arr2[c]) {
                                        if (b == c) {
                                            tempStrike++;
                                        } else {
                                            tempBall++;
                                        }
                                    }
                                }
                            }

                            if (tempStrike == strike[a] && tempBall == ball[a]) {
                                tempCount++;
                            }
                        }

                        if (tempCount == n) {
                            cnt++;
                        }
                    }
                }
            }
        }

        System.out.println(cnt);
    }
}
