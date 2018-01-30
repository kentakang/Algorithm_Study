public class ShapeArea {
    static int shapeArea(int n) {
        if(n == 1)
            return 1;

        return shapeArea(n - 1) + 4 * (n - 1);
    }

    public static void main(String[] args) {
        System.out.println(shapeArea(125));
    }
}
