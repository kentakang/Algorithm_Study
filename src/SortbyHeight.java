import java.util.Arrays;

public class SortbyHeight {
    static int[] sortByHeight(int[] a) {
        int[] result = new int[a.length];
        int[] copyArray = new int[a.length];

        System.arraycopy(a, 0, copyArray, 0, a.length);
        Arrays.sort(copyArray);

        for (int i = 0, j = 0; i < a.length; i++) {
            if (a[i] != -1) {
                while (copyArray[j] == -1) {
                    j++;
                }

                result[i] = copyArray[j];
                j++;
            }
            else
                result[i] = a[i];
        }

        return result;
    }

    public static void main(String[] args) {
        int[] a = { -1, 150, 190, 170, -1, -1, 160, 180 };
        a = sortByHeight(a);

        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
