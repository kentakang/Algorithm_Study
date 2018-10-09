import java.util.Scanner;

public class JUNGOL1641 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean isLoop = true;
        int size = scanner.nextInt();
        int type = scanner.nextInt();

        if (size < 0 || size > 100 || size % 2 == 0 || type < 1 || type > 3) {
            System.out.println("INPUT ERROR!");
            isLoop = false;
        }

        if (isLoop) {
            switch (type) {
                case 1:
                    int x = 0;

                    for (int i = 0; i < size; i++) {
                        if (i % 2 == 0) {
                            x = x + i + 1;
                            for (int j = 0; j <= i; j++) {
                                System.out.print(x++ + " ");
                            }
                        } else {
                            x = x + i;
                            for (int j = 0; j <= i; j++) {
                                System.out.print(x-- + " ");
                            }
                        }

                        System.out.print("\n");
                    }
                    break;
                case 2:
                    for (int i = 0; i < size; i++) {
                        for (int j = 0; j < i; j++) {
                            System.out.print("  ");
                        }

                        for (int j = 0; j < (size - i) * 2 - 1; j++) {
                            System.out.print(i + " ");
                        }

                        System.out.print("\n");
                    }
                    break;
                case 3:
                    for (int i = 1; i <= size / 2 + 1; i++) {
                        for (int j = 1; j <= i; j++) {
                            System.out.print(j + " ");
                        }

                        System.out.print("\n");
                    }

                    for (int i = 0; i < size / 2; i++) {
                        for (int j = 1; j <= size / 2 - i; j++) {
                            System.out.print(j + " ");
                        }

                        System.out.print("\n");
                    }
                    break;
            }
        }
    }
}
