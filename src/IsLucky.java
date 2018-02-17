public class IsLucky {
    static boolean isLucky(int n) {
        String num = Integer.toString(n);
        int length = num.length() / 2;
        int firstSum = 0;
        int secondSum = 0;

        for (int i = 0; i < length; i++)
            firstSum += (int) num.charAt(i);

        for (int i = length; i < num.length(); i++)
            secondSum += (int) num.charAt(i);

        if (firstSum == secondSum)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        int n = 239017;

        System.out.println(isLucky(n));
    }
}
