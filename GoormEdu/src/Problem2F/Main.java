package Problem2F;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Point2D[] points = new Point2D[scanner.nextInt()];
        double minDistance = Integer.MAX_VALUE;
        int cnt = 0;

        for (int i = 0; i < points.length; i++) {
            points[i] = new Point2D(scanner.nextInt(), scanner.nextInt());
        }

        for (int i = 0; i < points.length; i++) {
            for (int j = i + 1; j < points.length; j++) {
                if (minDistance > points[i].getDistance(points[j])) {
                    minDistance = points[i].getDistance(points[j]);
                }
            }
        }

        for (int i = 0; i < points.length; i++) {
            for (int j = i + 1; j < points.length; j++) {
                if (minDistance == points[i].getDistance(points[j])) {
                    cnt++;
                }
            }
        }

        System.out.printf("%.1f\n%d\n", minDistance, cnt);
    }
}

class Point2D {
    int x;
    int y;

    public Point2D(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getSquaredDistance(Point2D target) {
        int distanceX = Math.abs(target.x - this.x);
        int distanceY = Math.abs(target.y - this.y);

        return distanceX * distanceX + distanceY * distanceY;
    }

    public double getDistance(Point2D target) {
        double squared = (double) this.getSquaredDistance(target);

        return Math.sqrt(squared);
    }
}