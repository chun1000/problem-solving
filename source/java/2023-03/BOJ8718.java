import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ8718 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    //For FastIO

    static int x, k;
    //A global variable to use for the problem.

    static void input() throws Exception {
        st = new StringTokenizer(br.readLine());
        x = Integer.parseInt(st.nextToken())*1000;
        k = Integer.parseInt(st.nextToken())*1000;
    }

    static void solve() {
        int arr[] = {k/4, k/2, k, k*2, k*4};
        int max_size = 0;
        for(int i = 0; i <= 2; ++i) {
            int total = arr[i] + arr[i+1] + arr[i+2];
            if(total > x) {
                break;
            }
            else {
                max_size = total;
            }
        }
        System.out.println(max_size);
    }

    public static void main(String[] args) throws Exception {
        input();
        solve();
    }
}