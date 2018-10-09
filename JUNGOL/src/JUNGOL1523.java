import java.util.Scanner;

public class JUNGOL1523 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean isLoop = true;
        int size = 0, type = 0, k = 0;

        while (isLoop) {
            if (k != 0) System.out.println("INPUT ERROR!");
            size = scanner.nextInt();
            type = scanner.nextInt();

            if (size <= 100 && (type == 1 || type == 2 || type == 3)) {
                isLoop = false;
            }

            k++;
        }

        switch (type) {
            case 1:
                for (int i = 1; i <= size; i++) {
                    for (int j = 1; j <= i; j++) {
                        System.out.print("*");
                    }

                    System.out.print("\n");
                }
                break;
            case 2:
                for (int i = size; i >= 1; i--) {
                    for (int j = 1; j <= i; j++) {
                        System.out.print("*");
                    }

                    System.out.print("\n");
                }
                break;
            case 3:
                for (int i = 1; i <= size; i++) {
                    for (int j = 1; j <= size - i; j++) {
                        System.out.print(" ");
                    }

                    for (int j = 1; j < i * 2; j++) {
                        System.out.print("*");
                    }

                    System.out.print("\n");
                }
                break;
        }
    }
}
