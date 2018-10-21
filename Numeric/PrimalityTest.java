package primalityTest;

public class PrimalityTest {

	public static boolean isPrime(int number) {
	      if (number == 1)
	            return false;
	      if (number == 2)
	            return true;
	      if (number % 2 == 0)
	            return false;
	      for (int d = 3; d <= (int) Math.sqrt(number); d++)
	            if (number % d == 0) 
	                  return false;
	      return true;
	}
	
	public static void display(int number) {
		if(isPrime(number))
			System.out.print(number + " is prime");
		else
			System.out.print(number + " is not prime");
	}
	
	public static void main(String[] args) {
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("--------------Testing 3 For Primality--------------");
		System.out.println("\n--------------------------------------------------\n");
		display(3);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("--------------Testing 9 For Primality--------------");
		System.out.println("\n--------------------------------------------------\n");
		display(9);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("--------------Testing 13 For Primality-------------");
		System.out.println("\n--------------------------------------------------\n");
		display(13);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("--------------Testing 21 For Primality-------------");
		System.out.println("\n--------------------------------------------------\n");
		display(21);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("-------------Testing 37 For Primality--------------");
		System.out.println("\n--------------------------------------------------\n");
		display(37);
		
	}

}
