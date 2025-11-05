import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int cnt=0;
		for(int i=1; i<=100; i++) {
			cnt+=i;
			if(cnt>=n) {
				System.out.println(i);
				break;
			}
		}
	}
}