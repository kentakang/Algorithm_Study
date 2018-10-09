import java.util.Scanner;

public class JUNGOL2514 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        int koiCount = 0;
        int ioiCount = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == 'K' && i <= str.length() - 2) {
                if (str.charAt(i + 1) == 'O' && str.charAt(i + 2) == 'I') {
                    koiCount++;
                }
            } else if (str.charAt(i) == 'I' && i <= str.length() - 2) {
                if (str.charAt(i + 1) == 'O' && str.charAt(i + 2) == 'I') {
                    ioiCount++;
                }
            }
        }

        System.out.printf("%d\n%d", koiCount, ioiCount);
    }
}
