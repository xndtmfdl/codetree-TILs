import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		for(int i=0; i<a.length(); i++) {
			if(i == 1 || i == a.length()-2) {
				System.out.print("a");
				continue;
			}
			System.out.print(a.charAt(i));
		}
		
	}

}
