import java.util.Arrays;

public class GetMinMaxString {
    public String getMinMaxString(String str) {
        String[] a = str.split(" ");
        int[] array = new int[a.length];

        for(int i = 0; i < array.length; i++) {
            array[i] = Integer.parseInt(a[i]);
        }

        Arrays.sort(array);
        String result = array[0] + " " + array[array.length - 1];
        return result;
    }

    public static void main(String[] args) {
        String str = "1 2 3 4";
        GetMinMaxString minMax = new GetMinMaxString();
        System.out.println("최대값과 최소값은?" + minMax.getMinMaxString(str));
    }
}