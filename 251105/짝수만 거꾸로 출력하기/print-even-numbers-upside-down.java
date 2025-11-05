import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		int[] even = new int[n];
		Arrays.fill(even, 1);
 		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
			if(arr[i]%2==0) {
				even[i] = arr[i];
			}
		}
 		for(int i=even.length-1; i>=0; i--) {
 			if(even[i]%2==0) {
 	 			System.out.print(even[i] + " ");
 			}
 		}
 		
		
	}

}
