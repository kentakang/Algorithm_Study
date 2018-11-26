package Elementary01;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int roomMax = scanner.nextInt();
        int[] grade = new int[n];
        int[] gender = new int[n];
        int roomCount = 0;

        for (int i = 0; i < n; i++) {
            gender[i] = scanner.nextInt();
            grade[i] = scanner.nextInt();
        }

        for (int i = 1; i <= 6; i++) {
            int manCount = getCount(gender, grade, 1, i);
            int womanCount = getCount(gender, grade, 0, i);

            if (manCount > 0) {
                int rounded = Math.round((float) manCount / roomMax);
                roomCount += rounded;

                if ((float) manCount / roomMax - rounded > 0.0) {
                    roomCount++;
                }
            }

            if (womanCount > 0) {
                int rounded = Math.round((float) womanCount / roomMax);
                roomCount += rounded;

                if ((float) womanCount / roomMax - rounded > 0.0) {
                    roomCount++;
                }
            }
        }

        System.out.println(roomCount);
    }

    static int getCount(int[] data, int[] data2, int n, int n2) {
        int cnt = 0;

        for (int i = 0; i < data.length; i++) {
            if (data[i] == n && data2[i] == n2) {
                cnt++;
            }
        }

        return cnt++;
    }
}
