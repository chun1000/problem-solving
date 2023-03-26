import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.util.Stack;

public class BOJ1373 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    static StringTokenizer st;
    //For FastIO

    static String s;
    //A global variable to use for the problem.

    static void input() throws Exception {
        s = br.readLine();
    }

    static void solve() throws Exception {
        Stack<Integer> stack = new Stack<>();
        for(int i = s.length() - 1; i >= 0; i -= 3) {
            int second = 0, first = 0;
            int third = s.charAt(i) - '0'; //1
            if(i-1 >= 0) second = (s.charAt(i-1) - '0')*2; //2 
            if(i-2 >= 0) first = (s.charAt(i-2) - '0')*4; //4
            int sum = first + second + third;
            stack.push(sum);
        }

        while(!stack.empty()) {
            int n = stack.pop();
            bw.write(Integer.toString(n));
        }

        bw.write('\n');
        bw.flush();
        bw.close();
    }

    public static void main(String[] args) throws Exception {
        input();
        solve();
    }
}