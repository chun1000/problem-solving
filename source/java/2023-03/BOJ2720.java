import java.io.BufferedReader;
import java.io.InputStreamReader;

public class BOJ2720 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws Exception {
        int T = Integer.parseInt(br.readLine());
        for(int i =0; i < T; ++i) {
            int C = Integer.parseInt(br.readLine());
            int quater = 0, dime = 0, nickel = 0, penny = 0;
            while(C >= 25) {
                quater += 1;
                C -= 25;
            }

            while(C >= 10) {
                dime += 1;
                C -= 10;
            }

            while(C >= 5) {
                nickel += 1;
                C -= 5;
            }

            while(C >= 1) {
                C -= 1;
                penny += 1;
            }

            System.out.printf("%d %d %d %d\n", quater, dime, nickel, penny);
        }
    }
}
