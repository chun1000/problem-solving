//대체 왜 파이썬으로는 안 풀릴까 알 수 없음.


import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	public static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	//백준 전용 입출력 선언
	
	public static int N, M;
	//입력 변수 선언
	
	public static void input() throws Exception {
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
	}
	//입력 받기
	
	public static void solve() throws Exception {
		int act1, act2, act3, act4, ans;
		act1 = N;
		act2 = N/2;
		act3 = (N+1)/2;
		act4 = (N-1)/3+1;
		
		ans = 1;
		
		if(act1 <= M) {
			ans +=1;
		}
		
		if(N>1 && act2 <= M) {
			ans +=1;
		}
		
		if(N>1 && act3 <= M) {
			ans +=1;
		}
		
		if(N > 2  && act4 <= M) {
			ans +=1;
		}
		
		if(N >= 3 && act1 + act4 <= M) {
			ans +=1;
		}
		
		if(N >= 3 && act2 + act4 <= M) {
			ans +=1;
		}
		
		if(N>=3 && act3 +act4 <= M) {
			ans+=1;
		}
		
		bw.write(String.valueOf(ans));
	}
	//풀이
	
	public static void main(String [] args) throws Exception {
		input();
		solve();
		
		br.close();
		bw.close();
	}
}

