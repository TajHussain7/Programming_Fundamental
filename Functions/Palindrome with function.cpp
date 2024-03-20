#include<iostream>

using namespace std;

void function(int number) {
	int i = number;
	int digit = 0;
	int remaining = 0;
	while (number > 0) {
		digit = number % 10;
		remaining = (remaining * 10) + digit;
		number = number / 10;
	}
	if (remaining=i) {
		cout << i << " is a Palindrome. " << endl;
	}
	else {
		cout << i << " is not a Palindrome. " << endl;
	}
}
int main() {
	int number;
	cout << "Enter a number :: ";
	cin >> number;
	function(number);






	cout << endl;
	system("pause");
	return 0;
}