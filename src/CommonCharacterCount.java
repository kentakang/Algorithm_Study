public class CommonCharacterCount {
    static int commonCharacterCount(String s1, String s2) {
        int[] a = new int[26];
        int[] b = new int[26];
        int sum = 0;

        for (int i = 0; i < s1.length(); i++) {
            a[(int) s1.charAt(i) - 97]++;
        }

        for (int i = 0; i < s2.length(); i++) {
            b[(int) s2.charAt(i) - 97]++;
        }

        for (int i = 0; i < a.length; i++) {
            if (a[i] != 0 && b[i] != 0) {
                if (a[i] <= b[i])
                    sum += a[i];
                else if (b[i] < a[i])
                    sum += b[i];
            }
        }

        return sum;
    }

    public static void main(String[] args) {
        String s1 = "abca";
        String s2 = "xyzabc";

        System.out.println(commonCharacterCount(s1, s2));
    }
}
