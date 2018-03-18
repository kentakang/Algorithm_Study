import java.util.*;
import java.io.*;

public class Starman {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[][] data = {
            {"1967", "DavidBowie"},
            {"1969", "SpaceOddity"},
            {"1970", "TheManWhoSoldTheWorld"},
            {"1971", "HunkyDory"},
            {"1972", "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"},
            {"1973", "AladdinSane"},
            {"1973", "PinUps"},
            {"1974", "DiamondDogs"},
            {"1975", "YoungAmericans"},
            {"1976", "StationToStation"},
            {"1977", "Low"},
            {"1977", "Heroes"},
            {"1979", "Lodger"},
            {"1980", "ScaryMonstersAndSuperCreeps"},
            {"1983", "LetsDance"},
            {"1984", "Tonight"},
            {"1987", "NeverLetMeDown"},
            {"1993", "BlackTieWhiteNoise"},
            {"1995", "1.Outside"},
            {"1997", "Earthling"},
            {"1999", "Hours"},
            {"2002", "Heathen"},
            {"2003", "Reality"},
            {"2013", "TheNextDay"},
            {"2016", "BlackStar"}
        };
        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int startYear = Integer.parseInt(st.nextToken());
            int endYear = Integer.parseInt(st.nextToken());
            int cnt = 0;

            for(int j = startYear; j <= endYear; j++) {
                for(int k = 0; k < 25; k++) {
                    if(data[k][0].equals(Integer.toString(j)))
                        cnt++;   
                }
            }

            System.out.println(cnt);
            
            for(int j = startYear; j <= endYear; j++) {
                for(int k = 0; k < 25; k++) { 
                    if(data[k][0].equals(Integer.toString(j)))
                        System.out.println(data[k][0] + " " + data[k][1]);     
                }
            }
        }
    }
}