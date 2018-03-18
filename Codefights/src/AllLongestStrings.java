import java.util.ArrayList;

public class AllLongestStrings {
    static String[] allLongestStrings(String[] inputArray) {
        int maxLength = 0;
        ArrayList<String> result = new ArrayList<String>();

        for (int i = 0; i < inputArray.length; i++) {
            if (inputArray[i].length() > maxLength)
                maxLength = inputArray[i].length();
        }

        for (int i = 0; i < inputArray.length; i++) {
            if (inputArray[i].length() == maxLength)
                result.add(inputArray[i]);
        }

        return result.toArray(new String[result.size()]);
    }

    public static void main(String[] args) {
        String inputArray[] = { "aba" };
        String result[];
        result = allLongestStrings(inputArray);

        for (int i = 0; i < result.length; i++)
            System.out.println(result[i]);
    }
}
