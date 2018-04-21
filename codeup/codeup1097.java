import java.util.Scanner;

public class codeup1097 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[][] arr = new int[19][19];

        for (int i = 0; i < 19; i++) {
            for (int j = 0; j < 19; j++)
                arr[i][j] = s.nextInt();
        }

        int n = s.nextInt();

        for (int i = 0; i < n; i++) {
            int a = s.nextInt();
            int b = s.nextInt();

            for (int j = 0; j < 19; j++) {
                if (arr[a - 1][j] == 0)
                    arr[a - 1][j] = 1;
                else
                    arr[a - 1][j] = 0;
            }

            for (int j = 0; j < 19; j++) {
                if (arr[j][a - 1] == 0)
                    arr[j][a - 1] = 1;
                else
                    arr[j][a - 1] = 0;
            }
        }

        for (int i = 0; i < 19; i++) {
            for (int j = 0; j < 19; j++)
                System.out.print(arr[i][j] + " ");
            System.out.print("\n");
        }
    }
}
