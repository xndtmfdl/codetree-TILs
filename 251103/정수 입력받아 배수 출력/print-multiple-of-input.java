
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		for(int i=a; i<=5*a; i+=a) {
			System.out.print(i + " ");
		}
		
	}
}