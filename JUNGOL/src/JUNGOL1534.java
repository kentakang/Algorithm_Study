import java.util.Scanner;

public class JUNGOL1534 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int decimalNum = scanner.nextInt();
		int changeType = scanner.nextInt();
		
		switch (changeType) {
			case 2:
				System.out.println(Integer.toBinaryString(decimalNum));
				break;
			case 8:
				System.out.println(Integer.toOctalString(decimalNum));
				break;
			case 16:
				System.out.println(Integer.toHexString(decimalNum).toUpperCase());
				break;
		}
	}
}
