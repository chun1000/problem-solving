import java.math.BigInteger;
import java.util.Scanner;

public class BOJ1247 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        for(int i = 0; i < 3; ++i) {
            int n = in.nextInt();
            in.nextLine();
            BigInteger total = new BigInteger("0");
            for(int j = 0; j < n; ++j) {
                String input_line = in.nextLine();
                BigInteger temp = new BigInteger(input_line);
                total = total.add(temp);
            }
            if(total.compareTo(new BigInteger("0")) == 0) System.out.println("0");
            else if(total.compareTo(new BigInteger("0")) == 1) System.out.println("+");
            else System.out.println("-");
        }
        in.close();
    }
}
//2023 first ps java.