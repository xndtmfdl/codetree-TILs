import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int[][] arr1 = new int[4][4];
		int cnt = 0;
		for(int i=0; i<4; i++) {
			for(int j=0; j<4; j++) {
				arr1[i][j] = sc.nextInt();
			}
		}
		
		for(int i=0; i<4; i++) {
			for(int j=0; j<=i; j++) {
				cnt += arr1[i][j];
			}
		}
		System.out.println(cnt);
		
	}
}