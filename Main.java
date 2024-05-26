import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int num;
		Scanner A=new Scanner(System.in);
		num = A.nextInt();
		if(num%400==0)
		System.out.println("Leap year");
		else if(num%100==0)
		System.out.println("Ordinary year");
		else if(num%4==0)
		System.out.println("Leap year");
		else
			System.out.println("Ordinary year");
	}
}
