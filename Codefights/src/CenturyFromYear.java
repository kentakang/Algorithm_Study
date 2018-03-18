public class CenturyFromYear {
    static int centuryFromYear(int year) {
        if(year % 100 == 0) {
            return year / 100;
        } else {
            return (year / 100) + 1;
        }
    }

    public static void main(String[] args) {
        int year = 2001;

        System.out.println(centuryFromYear(2001));
    }
}
