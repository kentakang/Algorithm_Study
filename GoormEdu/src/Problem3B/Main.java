package Problem3B;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        Painting[] paintings = new Painting[m];

        for (int i = 0; i < m; i++) {
            int left = scanner.nextInt();
            int right = scanner.nextInt();
            int color = scanner.nextInt();

            paintings[i] = new Painting(left - 1 , right - 1, color);
        }

        solve(n, m, paintings);
    }

    public static void solve(int n, int m, Painting[] paintings) {
        int[] seats = new int[n];
        int maxColor = seats[0];
        int maxTimes = Integer.MIN_VALUE;
        int minColor = seats[0];
        int minTimes = Integer.MAX_VALUE;

        for (int i = 0; i < m; i++) {
            Painting p = paintings[i];

            for (int j = p.left; j <= p.right; j++) {
                seats[j] = p.color;
            }
        }

        for (int i = 0; i <= 99; i++) {
            int times = getTimes(i, seats);

            if (times == 0)
                continue;

            if (times > maxTimes) {
                maxTimes = times;
                maxColor = i;
            }

            if (times < minTimes) {
                minTimes = times;
                minColor = i;
            }
        }

        System.out.println(maxColor);
        System.out.print(minColor);
    }

    public static int getTimes(int color, int[] seats) {
        int times = 0;

        for (int i = 0; i < seats.length; i++) {
            if (seats[i] == color) {
                times++;
            }
        }

        return times;
    }
}

class Painting {
    int left;
    int right;
    int color;

    Painting(int left, int right, int color) {
        this.left = left;
        this.right = right;
        this.color = color;
    }
}
