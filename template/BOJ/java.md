```java
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
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

    static void solve() throws Exception {
        bw.write("Hello World!");
    }

    public static void main(String[] args) throws Exception {
        input();
        solve();
        bw.flush();
        bw.close();
        br.close();
    }
}
```
