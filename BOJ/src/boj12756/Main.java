package boj12756;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int acardAtk = s.nextInt();
        int acardHp = s.nextInt();
        int bcardAtk = s.nextInt();
        int bcardHp = s.nextInt();

        while (acardHp > 0 && bcardHp > 0) {
            acardHp -= bcardAtk;
            bcardHp -= acardAtk;
        }

        if (acardHp <= 0 && bcardHp <= 0)
            System.out.println("DRAW");
        else if (acardHp > bcardHp)
            System.out.println("PLAYER A");
        else
            System.out.println("PLAYER B");
    }
}
