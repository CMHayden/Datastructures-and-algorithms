/* String Reversal:
		*reverseStr() -Takes a string as an argument and reverses the order of its charachters.
*/
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two 
	// corners 
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);

	cout << str << endl;
}

int main()
{
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Reversing string 'Python'---------------";
	cout << "\n--------------------------------------------------\n";
	string str1 = "Python";
	reverseStr(str1);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Reversing string 'Java'---------------";
	cout << "\n--------------------------------------------------\n";
	string str2 = "Java";
	reverseStr(str2);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Reversing string 'Java Script'---------------";
	cout << "\n--------------------------------------------------\n";
	string str3 = "Java Script";
	reverseStr(str3);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Reversing string 'Node JS'---------------";
	cout << "\n--------------------------------------------------\n";
	string str4 = "Node JS";
	reverseStr(str4);
}

