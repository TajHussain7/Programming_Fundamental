#include<iostream>

using namespace std;
void add(int *x,int *y,int *result) {
	*result = *x + *y;
}
void sub(int *x,int *y,int *result) {
	*result = *x - *y;
}
void mul(int *x,int *y,int *result) {
	*result = *x * *y;
}
void divi(int *x,int *y,int *result) {
	*result=*x / *y;
}
int main() {
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	char op;
	cout << "Enter your operator: ";
	cin >> op;
	int result;
	if (op == '+') {
		add(&a, &b, &result);
		cout << a << " + " << b << " = " << result << endl;
	}
	else if (op == '-') {
		sub(&a, &b, &result);
		cout << a << " - " << b << " = " << result << endl;
	}
	else if (op == '*') {
		mul(&a, &b, &result);
		cout << a << " * " << b << " = " << result << endl;
	}
	else if (op == '/') {
		divi(&a, &b, &result);
		cout << a << " / " << b << " = " << result << endl;

	}

	system("pause");
	return 0;
}