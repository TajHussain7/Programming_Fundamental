#include<iostream>

using namespace std;
void calculator();
int main()
{
	calculator();

	system("pause");
	return 0;
}
void calculator()
{
	int num1 = 0, num2 = 0;
	char op;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter Operation: ";
	cin >> op;
	if (op == '+') {
		cout << "The result after addition is: " << num1 + num2 << endl;
	}
	if (op == '-') {
		cout << "The result after subtraction is: " << num1 - num2 << endl;
	}
	if (op == '*') {
		cout << "The result after multiplication is: " << num1 * num2 << endl;
	}
	if (op == '/') {
		cout << "The result after division is: " << num1 / num2 << endl;
	}
}