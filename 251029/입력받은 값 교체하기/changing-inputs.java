
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int temp = 0;
		int a = sc.nextInt();
		int b= sc.nextInt();
		temp = a;
		a = b;
		b = temp;
		System.out.println(a + " " + b);
		sc.close();
		
	}
}