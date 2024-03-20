#include<iostream>

using namespace std;

int calsum(int num1,int num2);
int calmul(int num1,int num2);
int main()
{
	int num1 = 0, num2 = 0;
	cout << "Enter number 1 : ";
	cin >> num1;
	cout << "Enter number 2 : ";
	cin >> num2;
	calmul(num1, num2);

	system("pause");
	return 0;
}
int calmul(int num1,int num2) {
	num1=num1* num1;
	num2=num2* num2;
	calsum(num1, num2);
	return num1;
}
int calsum(int num1, int num2) {
	int sum = 0;
	sum = num1 + num2;
	cout << "The Result is: " << sum << endl;

	return sum;
}