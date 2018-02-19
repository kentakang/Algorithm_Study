public class ReverseParentheses {
    static String reverseParentheses(String s) {
        char[] chars = s.toCharArray();
        int[] openPosStack = new int[chars.length];
        int openPosTop = -1;

        for (int i = 0; i < chars.length; i++) {
            switch (chars[i]) {
                case '(':
                    openPosStack[++openPosTop] = i;
                    break;
                case ')':
                    int a, b;
                    for (a = openPosStack[openPosTop--], b = i; a < b; a++, b--) {
                        char swap = chars[a];
                        chars[a] = chars[b];
                        chars[b] = swap;
                    }
            }
        }

        int o = 0;
        for (int i = 0; i < chars.length; i++) {
            switch (chars[i]) {
                case '(': case ')':
                    break;
                default:
                    chars[o++] = chars[i];
            }
        }
        return new String(chars, 0, o);
    }

    public static void main(String[] args) {
        String s = "a(bcdefghijkl(mno)p)q";

        System.out.println(reverseParentheses(s));
    }
}
