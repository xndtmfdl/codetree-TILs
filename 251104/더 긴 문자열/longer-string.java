import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String y = sc.next();
		
		if(s.length() > y.length()) {
			System.out.println(s + " " + s.length());
		}
		else if (s.length() < y.length()) {
			System.out.println(y + " " + y.length());
		}
		else {
			System.out.println("same");
		}
		
		
	}

}
