package integerPalindrome;

public class IntegerPalindrome {

	public static boolean palindromeCheck(int num) {
		int digit = 0;
		int rev = 0;
		int n = num;
		while(num != 0) {
			digit = num % 10;
			rev = (rev*10) + digit;
			num = num/10;
		}
		if (n == rev) {
			return true;
		} else { 
			return false;
		}
	}
	
	public static void palindromeDisplay(int num) {
		if(palindromeCheck(num)) {
			System.out.println(num + " is a palindrome.");
		} else {
			System.out.println(num + " is not a palindrome.");
		}
	}
	public static void main(String[] args) {
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("-----------Checking if 1221 is a palindrome-----------");
		System.out.println("\n--------------------------------------------------\n");
		palindromeDisplay(1221);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("-----------Checking if 3433 is a palindrome-----------");
		System.out.println("\n--------------------------------------------------\n");
		palindromeDisplay(3433);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("---------Checking if 5665665 is a palindrome---------");
		System.out.println("\n--------------------------------------------------\n");
		palindromeDisplay(5665665);
		System.out.println("\n--------------------------------------------------\n");
		System.out.println("---------Checking if 787878 is a palindrome---------");
		System.out.println("\n--------------------------------------------------\n");
		palindromeDisplay(787878);
		
	}

}
