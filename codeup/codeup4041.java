import java.util.Scanner;

public class codeup4041 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] arr = new int[7];
        int sum = 0;
        String str = s.nextLine();

        for (int i = 0; i < str.length(); i++) {
                arr[i] = str.charAt(i) - 48;
        }

        for (int i = str.length() - 1; i >= 0; i--) {
            if (arr[i] == 0)
                continue;

            System.out.print(arr[i]);
            sum += arr[i];
        }

        System.out.print("\n" + sum);
    }
}
