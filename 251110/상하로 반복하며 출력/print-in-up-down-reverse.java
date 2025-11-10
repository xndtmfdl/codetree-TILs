import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int[][] arr1 = new int[a][a];


		for(int i=0; i<a; i++) {
			for(int j=0; j<a; j++) {
				if(j%2==0) {
					arr1[i][j] = i+1;
					System.out.print(arr1[i][j]);
				}
				else {
					arr1[i][j] = a-i;
					System.out.print(arr1[i][j]);
				}
			}
			System.out.println();
		}
	}
}
