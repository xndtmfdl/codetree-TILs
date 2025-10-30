import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a;
		a = sc.nextInt();
		
		if(a<0) {
			System.out.println(a + "\n" + "minus");
		}
		else {
			System.out.println(a);
			
		}
		sc.close();
	}

}
