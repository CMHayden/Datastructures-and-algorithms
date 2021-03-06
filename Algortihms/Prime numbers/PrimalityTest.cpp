/* Primality Test:
		*isPrime() - tests if a number is prime. Returns boolean
		*display() - calls isPrime(). Displays if a number is prime or not.
*/

#include "pch.h"
#include <iostream>
using namespace std;

bool isPrime(int number)
{
	if (number == 1)
		return false;
	if (number == 2)
		return true;
	if (number % 2 == 0)
		return false;
	for (int d = 3; d <= (int)sqrt((double)number); d++)
		if (number % d == 0)
			return false;
	return true;
}

void display(int number)
{
	if (isPrime(number))
		cout << number << " is prime." << endl;
	else
		cout << number << " is not prime" << endl;
}

int main()
{
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Testing 3 For Primality---------------";
	cout << "\n--------------------------------------------------\n";
	display(3);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Testing 9 For Primality---------------";
	cout << "\n--------------------------------------------------\n";
	display(9);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Testing 13 For Primality---------------";
	cout << "\n--------------------------------------------------\n";
	display(13);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Testing 21 For Primality---------------";
	cout << "\n--------------------------------------------------\n";
	display(21);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Testing 37 For Primality---------------";
	cout << "\n--------------------------------------------------\n";
	display(37);
}

