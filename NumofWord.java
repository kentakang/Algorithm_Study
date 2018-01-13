import java.util.Scanner;

public class NumofWord {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();
        String[] arr = str.split(" ");
        int length = arr.length;

        if(length > 0 && arr[0].equals("")) length -= 1;
        System.out.println(length);
    }
}