//bronze implementation
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
	
	public static int[] note = new int[8];
	//입력 변수 선언
	
	public static void input() throws Exception {
		String input_line = br.readLine();
		StringTokenizer st = new StringTokenizer(input_line, " ");
		for(int i =0; i<8; i++) {
			note[i] = Integer.parseInt(st.nextToken());
		}
	}
	//입력 받기
	
	public static void solve() throws Exception {
		boolean ascending = true, descending = true;
		
		for(int i =1; i <8; i++) {
			if(note[i] > note[i-1]) {
				descending = false;
			} 
			else {
				ascending = false;
			}
		}
		
		if(ascending) {
			bw.write("ascending");
		}
		else if(descending) {
			bw.write("descending");
		}
		else {
			bw.write("mixed");
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

