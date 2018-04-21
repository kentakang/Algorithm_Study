import java.util.Scanner;

public class Boj11721 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        for(int i = 1; i <= str.length(); i++) {
            if(i % 10 == 0) {
                System.out.print(str.charAt(i-1) + "\n");
            } else {
                System.out.print(str.charAt(i-1));
            } 
        }
    }
}