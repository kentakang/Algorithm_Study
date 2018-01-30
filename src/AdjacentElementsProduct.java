public class AdjacentElementsProduct {
    static int adjacentElementsProduct(int[] inputArray) {
        int maxNum = inputArray[0] * inputArray[1];

        for(int i = 0; i < inputArray.length - 1; i++) {
            if (maxNum < inputArray[i] * inputArray[i + 1])
                maxNum = inputArray[i] * inputArray[i + 1];
        }

        return maxNum;
    }

    public static void main(String[] args) {
        int arr[] = {1, 0, 1, 0, 1000};

        System.out.println(adjacentElementsProduct(arr));
    }
}
