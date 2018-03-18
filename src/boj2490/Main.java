package boj2490;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        for (int i = 0; i < 3; i++) {
            int sum = s.nextInt() + s.nextInt() + s.nextInt() + s.nextInt();

            switch(sum) {
                case 1:
                    System.out.println("C");
                    break;
                case 2:
                    System.out.println("B");
                    break;
                case 3:
                    System.out.println("A");
                    break;
                case 4:
                    System.out.println("E");
                    break;
                default:
                    System.out.println("D");
                    break;
            }
        }
    }
}
