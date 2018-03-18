import java.util.Arrays;
import java.util.ArrayList;

class Divisible {
	public int[] divisible(int[] array, int divisor) {
		ArrayList<Integer> list = new ArrayList<>();
        for(int i : array) {
            if(i % divisor == 0) {
                list.add(i);
            }
        }
        int[] ret = new int[list.size()];
        for(int i = 0; i < ret.length; i++) {
            ret[i] = list.get(i);
        }
		return ret;
	}
	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	public static void main(String[] args) {
		Divisible div = new Divisible();
		int[] array = {5, 9, 7, 10};
		System.out.println( Arrays.toString( div.divisible(array, 5) ));
	}
}