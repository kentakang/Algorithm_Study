package Problem2H;

import java.lang.*;
import java.util.*;

public class Main {
    public static final Scanner scanner = new Scanner(System.in);

    /**
     * 왼쪽 아래 좌표가 (x,y)인 픽셀이 반지름 R인 원에 포함되는가?
     * @param x
     * @param y
     * @param R
     * @return  포함된다면 true, else false
     */
    public static boolean isInside(long x, long y, long R)
    {
        long sqd = x * x + y * y;

        if (sqd < R * R) {
            return true;
        }

        return false;
    }

    public static void testCase(int caseIndex) {
        long R = scanner.nextLong();

        long sum = 0;
        long y = R;

        for (long x = 0; x <= R; x++) {
            long height = 0;
            for (; y >= 0; y--) {
                if (isInside(x, y, R)) {
                    height = (y + 1);
                    break;
                }
            }

            sum += height;
        }

        System.out.printf("#%d\n", caseIndex);
        System.out.print(sum * 4);
    }

    public static void main(String[] args) {
        int caseSize = scanner.nextInt();

        for (int caseIndex = 1; caseIndex <= caseSize; caseIndex += 1) {
            testCase(caseIndex);

            if (caseIndex != caseSize) {
                System.out.print("\n");
            }
        }
    }

}