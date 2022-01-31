//브론즈, Math 사용


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
	
	public static int []arr = new int[5];
	//입력 변수 선언
	
	public static void input() throws Exception {
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		for(int i = 0; i < 5; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
	}
	//입력 받기
	
	public static void solve() throws Exception {
		int ans = 0;
		for(int i = 0; i <5; i++) {
			ans += Math.pow(arr[i], 2);
		}
		ans %= 10;
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

