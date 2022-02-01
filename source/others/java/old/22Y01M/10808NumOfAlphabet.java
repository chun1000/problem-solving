
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
	
	public static String S;
	//입력 변수 선언
	
	public static void input() throws Exception {
		S = br.readLine();
	}
	//입력 받기
	
	public static void solve() throws Exception {
		int[] alpha = new int[26];
		
		for(int i =0; i < S.length(); i++) {
			alpha[S.charAt(i) - 'a'] += 1;
		}
		
		for(int n : alpha) {
			bw.write(Integer.toString(n) + " ");
		}
	}
	//풀이
	
	public static void main(String [] args) throws Exception {
		input();
		solve();
		
		br.close();
		bw.close();
	}
}

