
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		if(n%4==0) {
			if(n%100==0 && n%400!=0) {
				System.out.println("false");
			}
			else {
				System.out.println("true");
			}
		}
		else {
			System.out.println("false");
		}
	}
}