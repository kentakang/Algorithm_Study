import java.util.ArrayList;
import java.util.Scanner;

public class JUNGOL1341 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<>();
        int start = 0, end = 0, k = 0;
        boolean isLoop = true;

        while (isLoop) {
            if (k > 0) System.out.println("INPUT ERROR!");
            start = scanner.nextInt();
            end = scanner.nextInt();
            k++;

            if (start > 1 && end > 1) {
                if (start <= 9 && end <= 9) {
                    isLoop = false;
                }
            }
        }

        scanner.close();

        if (start > end) {
            for (int i = start; i >= end; i--) {
                list.add(i);
            }
        } else {
            for (int i = start; i <= end; i++) {
                list.add(i);
            }
        }

        for (int obj : list) {
            for (int i = 1; i <= 9; i++) {
                if (i % 3 == 0) {
                    System.out.printf("%d * %d = %2d\n", obj, i, obj * i);
                } else {
                    System.out.printf("%d * %d = %2d   ", obj, i, obj * i);
                }
            }

            System.out.print("\n");
        }
    }
}
