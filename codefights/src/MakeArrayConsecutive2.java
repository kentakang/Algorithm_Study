public class MakeArrayConsecutive2 {
    static int makeArrayConsecutive2(int[] statues) {
        int minNum = statues[0];
        int maxNum = 0;
        int cnt = 0;

        for(int i = 0; i < statues.length; i++) {
            if(statues[i] < minNum)
                minNum = statues[i];
            else if(statues[i] > maxNum)
                maxNum = statues[i];
        }

        for(int i = minNum; i <= maxNum; i++) {
            int cnt2 = 0;

            for(int j = 0; j < statues.length; j++) {
                if(statues[j] == i)
                    cnt2++;
            }

            if(cnt2 == 0)
                cnt++;
        }

        return cnt;
    }

    public static void main(String[] args) {
        int[] statues = {6, 2, 3, 8};

        System.out.println(makeArrayConsecutive2(statues));
    }
}
