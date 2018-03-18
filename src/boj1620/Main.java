package boj1620;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();
        String[] pokedex = new String[n];

        for (int i = 0; i < n; i++)
            pokedex[i] = s.next();

        for (int i = 0; i < m; i++) {
            String str = s.next();

            if (StringisInteger(str)) {
                System.out.println(pokedex[Integer.parseInt(str) - 1]);
            } else {
                for (int j = 0; j < n; j++) {
                    if (pokedex[j].equals(str))
                        System.out.println(j + 1);
                }
            }
        }
    }

    public static boolean StringisInteger(String str) {
        try {
            Integer.parseInt(str);
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }
}
