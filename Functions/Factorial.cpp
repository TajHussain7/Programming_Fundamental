#include<iostream>

using namespace std;

int factorial(int number) {
	int fact = 1;
	int i = number;
	while (i> 0) {
		fact = fact * i;
		i--;
	}
	return fact;
}
int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	int fact=factorial(number);
	cout << "Factorial of this " << number << "! is : " << fact << endl;



	cout << endl;

	system("pause");
	return 0;
}