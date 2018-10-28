import java.util.Scanner;

public class JUNGOL2814 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String num = scanner.nextLine();

        System.out.println(Solution(num));
    }

    static int Solution(String num) {
        int answer = 0;
        int x = 1;

        for (int i = num.length() - 1; i >= 0; i--) {
            if (num.charAt(i) == '1') {
                answer += x;
            }

            x *= 2;
        }

        return answer;
    }
}
