import java.util.Scanner;

public class JUNGOL1009 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = "";

        while (!str.equals("0")) {
            str = scanner.nextLine();
            int sum = 0;
            int cnt = 0;

            if (!str.equals("0")) {
                for (int i = str.length() - 1; i >= 0; i--) {
                    if (str.charAt(i) != '0' || cnt != 0) {
                        System.out.print(str.charAt(i));
                        sum += str.charAt(i) - 48;
                        cnt++;
                    }
                }

                System.out.print(" " + sum + "\n");

            }
        }
    }
}
