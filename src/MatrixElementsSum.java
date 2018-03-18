public class MatrixElementsSum {
    static int matrixElementsSum(int[][] matrix) {
        int sum = 0;

        for (int i = 0; i < matrix[0].length; i++) {
            int x = 0;

            for (int j = 0; j < matrix.length; j++) {
                if (matrix[j][i] == 0)
                    x++;
                else if (matrix[j][i] != 0 && x == 0)
                    sum += matrix[j][i];
            }
        }

        return sum;
    }

    public static void main(String[] args) {
        int[][] matrix = { {1, 1, 1, 0}, {0, 5, 0, 1}, {2, 1, 3, 10}};

        System.out.println(matrixElementsSum(matrix));
    }
}
