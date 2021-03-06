// PalindromeTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool palindromeCheck(int num) {
	int digit = 0;
	int rev = 0;
	int n = 0;
	n = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);
	if (n == rev)
		return true;
	else
		return false;
}

void palindromeDisplay(int num) {
	if (palindromeCheck(num))
		cout << num << " is a palindrome." << endl;
	else
		cout << num << " is not a palindrome." << endl;
}

int main()
{
	cout << "\n--------------------------------------------------\n";
	cout << "---------Checking if 1221 is a palindrome---------";
	cout << "\n--------------------------------------------------\n";
	palindromeDisplay(1221);
	cout << "\n--------------------------------------------------\n";
	cout << "---------Checking if 3433 is a palindrome---------";
	cout << "\n--------------------------------------------------\n";
	palindromeDisplay(3433);
	cout << "\n--------------------------------------------------\n";
	cout << "-------Checking if 5665665 is a palindrome--------";
	cout << "\n--------------------------------------------------\n";
	palindromeDisplay(5665665);
	cout << "\n--------------------------------------------------\n";
	cout << "--------Checking if 787878 is a palindrome--------";
	cout << "\n--------------------------------------------------\n";
	palindromeDisplay(787878);
}
