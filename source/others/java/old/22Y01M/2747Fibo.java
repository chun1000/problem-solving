//브론즈
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	public static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	//백준 전용 입출력 선언
	
	
	//입력 변수 선언
	public static int N;
	
	public static void input() throws Exception {
		N = Integer.parseInt(br.readLine());
	}
	//입력 받기
	
	public static void solve() throws Exception {
		int[] dp = new int[N+1];
		dp[0] = 0;
		dp[1] = 1;
		
		for(int i = 2; i <= N; i++) {
			dp[i] = dp[i-1] + dp[i-2];
		}
		
		bw.write(Integer.toString(dp[N]));
	}
	//풀이
	
	public static void main(String [] args) throws Exception {
		input();
		solve();
		
		br.close();
		bw.close();
	}
}

