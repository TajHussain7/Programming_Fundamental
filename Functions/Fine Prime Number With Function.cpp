#include<iostream>

using namespace std;

void Is_Prime(int number, int number2) {
	//To check Prime number from one number to another number...............
	for (int i = number; i <= number2; i++) {
		int j;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i==j) {
			cout << i << " ";
		}
	}
	//To check Entered number is prime number or not........................ 
	/*if (number % 2 == 0) {
		cout << number << " is a Prime Number. " << endl;
	}
	else {
		cout << number << " is not a Prime Number. " << endl;
	}*/
}
int main() {
	int number, number2;
	cout << "Enter your first number: ";
	cin >> number;
	cout << "Enter your second number: ";
	cin >> number2;
	Is_Prime(number,number2);


	cout << endl;
	system("pause");
	return 0;
}