import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int[][] arr1 = new int[a][a];
//		for(int i=0; i<a; i++) {
//			for(int j=0; j<a; j++) {
//				arr1[i][j] = sc.nextInt();
//			}
//		}

		for (int i = 0; i < a; i++) {
			if(i%2==0) {
				for (int j = 1; j <= a; j++) {
					System.out.print(j);
				}
			}
			else {
				for(int j = a; j>0; j--) {
					System.out.print(j);
				}
			}
			System.out.println();
			
		}

	}
}