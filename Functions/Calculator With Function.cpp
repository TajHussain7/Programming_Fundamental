#include<iostream>

using namespace std;
void calculator(int num1, int num2,char op);
void sum(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void di(int num1, int num2);
int main() {
	int num1, num2;
	char op = { '\0' };
	cout << "Enter First Number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter your Operator: ";
	cin >> op;
	calculator(num1, num2, op);

	system("pause");
	return 0;
}
void calculator(int num1,int num2, char op) {
	if (op == '+') {
		sum(num1, num2);
	}
	else if (op == '-') {
		sub(num1, num2);
	}
	else if(op == '*') {
		mul(num1, num2);
	}
	else if (op == '/') {
		di(num1, num2);
	}
 }
void sum(int num1, int num2) {
	cout << "The sum of two Numbers is: " << num1 + num2 << endl;
}
void sub(int num1, int num2) {
	cout << "The subtrcation of two Numbers is: " << num1 - num2 << endl;
}
void mul(int num1, int num2) {
	cout << "The multiplication of two Numbers is: " << num1 * num2 << endl;
}
void di(int num1, int num2) {
	cout << "The division of two Numbers is: " << num1 / num2 << endl;
}