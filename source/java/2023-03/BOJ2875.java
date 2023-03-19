import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ2875 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    //For FastIO

    static int N, M, K;
    //A global variable to use for the problem.

    static void input() throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
    }

    static void solve() {
        int share;

        if(N/2 < M) share = N/2;
        else share = M;

        K -= N - share*2;
        K -= M - share;
       
        if(K > 0) {
            share -= (K+2)/3;
        }
 
        System.out.println(share);

    }

    public static void main(String[] args) throws Exception {
        input();
        solve();
    }
}
