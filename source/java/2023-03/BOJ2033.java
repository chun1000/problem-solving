import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ2033 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    //For FastIO

    static int N;
    //A global variable to use for the problem.

    static void input() throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
    }

    static void solve() {
        double ans = N;
        int p = 0;
        while(ans >= 10) {
            ans /= 10;
            ans = Math.round(ans);
            p += 1;
        }
        for(int i = 0; i <p; ++i) {
            ans *= 10;
        }
        System.out.println(Math.round(ans));
    }

    public static void main(String[] args) throws Exception {
        input();
        solve();
    }
}