package boj5543;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] burger = new int[3];
        int[] drink = new int[2];
        int[] setMenu = new int[6];
        int idx = 0;

        for (int i = 0; i < 3; i++)
            burger[i] = s.nextInt();

        for (int i = 0; i < 2; i++)
            drink[i] = s.nextInt();

        for (int i = 0; i < burger.length; i++) {
            for (int j = 0; j < drink.length; j++) {
                setMenu[idx] = burger[i] + drink[j] - 50;
                idx++;
            }
        }

        for (int i = 0; i < setMenu.length - 1; i++) {
            for (int j = 0; j < setMenu.length - 1; j++) {
                if (setMenu[j] > setMenu[j + 1]) {
                    int temp = setMenu[j];
                    setMenu[j] = setMenu[j + 1];
                    setMenu[j + 1] = setMenu[j];
                }
            }
        }

        System.out.println(setMenu[0]);
    }
}
