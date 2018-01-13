import java.util.Scanner;

public class SumofNum {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int length = Integer.parseInt(s.nextLine());
        String number = s.nextLine();
        int sum = 0;

        for(int i = 0; i < length; i++) {
            sum += number.charAt(i) - '0';
        }
        System.out.println(sum);
    }
}