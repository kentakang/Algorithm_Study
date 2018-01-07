import java.util.Arrays;

public class ReverseStr {
    public String reverseStr(String str) {
        char[] a = str.toCharArray();
        Arrays.sort(a);
        return new StringBuilder(new String(a)).reverse().toString();
    }

    public static void main(String[] args) {
        ReverseStr rs = new ReverseStr();
        System.out.println(rs.reverseStr("Zbcdefg"));
    }
}