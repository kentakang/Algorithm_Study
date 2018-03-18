package boj4673;

public class Main {

    static int arr[] = new int [10036];

    public static void main(String[] args) {
        for (int i = 1; i <= 10000; i++) {
            arr[getSelf(i)] = 1;
            if (arr[i] != 1)
                System.out.println(i);
        }
    }

    static int getSelf(int n) {
        int res = n;

        if (n >= 10000) {
            res += n / 10000; n %= 10000;
        }
        if (n >= 1000) {
            res += n / 1000; n %= 1000;
        }if (n >= 100) {
            res += n / 100; n %= 100;
        }if (n >= 10) {
            res += n / 10; n %= 10;
        }

        return res += n;
    }
}
