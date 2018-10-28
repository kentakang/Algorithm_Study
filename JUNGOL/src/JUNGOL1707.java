import java.util.Scanner;

public class JUNGOL1707 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[][] array = new int[n][n];

        int count = 1;
        int x = 0;
        int y = 0;
        int round = 0;

        while( count <= n*n ) {

            // 시작점은 라운드 회수와
            x = round;
            y = round;

            for(y = round; y < n-round; y++) {
                array[x][y] = count++;
            }

            y--;
            x++;

            for(; x < n-round; x++) {
                array[x][y] = count++;
            }

            x--;
            y--;

            for(; y >= round; y--) {
                array[x][y] = count++;
            }

            x--;
            y++;

            for(; x >= round + 1; x--) {
                array[x][y] = count++;
            }

            round++;
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.printf("%d ", array[i][j]);
            }

            System.out.print("\n");
        }
    }
}
