public class CheckPalindrome {
    static boolean checkPalindrome(String inputString) {
        int len = inputString.length();
        boolean result = true;

        for(int i = 0; i < len / 2; i++) {

            if(inputString.charAt(i) != inputString.charAt(len - i - 1)) {
                result = false;
                break;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        System.out.println(checkPalindrome("aabaa"));
    }
}
