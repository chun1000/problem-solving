import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ2160 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    //For FastIO

    static int N;
    static char board[][][];
    //A global variable to use for the problem.

    static void input() throws Exception {
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        board = new char[N][5][7];
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < 5; ++j) {
                String str = br.readLine();
                board[i][j] = str.toCharArray();
            }
        }
    }

    static int GetBoardDiff(char board1[][], char board2[][]) {
        int cnt = 0;
        for(int i = 0; i < 5; ++i) {
            for(int j = 0; j < 7; ++j) {
                if(board1[i][j] != board2[i][j]) {
                    cnt += 1;
                }
            }
        }
        return cnt;
    }

    static void solve() {
        int min_diff = 100;
        int min_idx1 = -1;
        int min_idx2 = -1;
        for(int i = 0; i < N; ++i) {
            for(int j = i +1; j < N; ++j) {
                int diff = GetBoardDiff(board[i], board[j]);
                if(diff < min_diff) {
                    min_diff = diff;
                    min_idx1 = i;
                    min_idx2 = j;
                }
            }
        }
        System.out.printf("%d %d", min_idx1+1, min_idx2+1);
    }

    public static void main(String[] args) throws Exception {
        input();
        solve();
    }
}