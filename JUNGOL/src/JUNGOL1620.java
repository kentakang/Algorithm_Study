import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class JUNGOL1620 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        StringTokenizer stringTokenizer = new StringTokenizer(input, " ");
        String phoneNum = stringTokenizer.nextToken() + " ";
        int num = Integer.parseInt(stringTokenizer.nextToken());
        int part = Integer.parseInt(stringTokenizer.nextToken());
        boolean isValid = true;
        ArrayList<String> phone = new ArrayList<>();
        String split[] = phoneNum.split("-");

        for (String str : split) {
            if (str.length() > 4) {
                isValid = false;
            }

            phone.add(str);
        }

        if (isValid) {
            System.out.println(Solution(phone, num, part));
        } else {
            System.out.println("INPUT ERROR!");
        }
    }

    static String Solution(ArrayList<String> phone, int num, int part) {
        String target = phone.get(part - 1).replaceAll(" ", "");
        String answer = "";

        if (target.length() < 4) {
            String newTarget = "";
            for (int i = 0; i < 4 - target.length(); i++) {
                newTarget += "0";
            }

            target = newTarget + target;
        }

        for (int i = 0; i < target.length(); i++) {
            int n = target.charAt(i) - 48;
            n = n + num;

            if (n >= 10) {
                n = n % 10;
            }

            answer += String.valueOf(n);
        }

        return answer;
    }
}
