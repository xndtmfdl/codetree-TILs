import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a, b, c;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		int avg = (a+b+c) / 3;
		
		System.out.println((a+b+c) + "\n" + avg + "\n" + ((a+b+c) - ((a+b+c)/3)));
	}

}
