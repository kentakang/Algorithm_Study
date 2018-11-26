package Problem2D;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println(compareString(scanner.nextLine(), scanner.nextLine()));
    }

    static int compareString(String str1, String str2) {
        for (int i = 0; i < (str1.length() <= str2.length() ? str1.length() : str2.length()); i++) {
            if (str1.charAt(i) != str2.charAt(i)) {
                return str1.charAt(i) < str2.charAt(i) ? -1 : 1;
            }
        }

        if (str1.length() != str2.length()) {
            return str1.length() > str2.length() ? 1 : -1;
        }

        return 0;
    }
}
