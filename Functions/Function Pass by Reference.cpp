#include<iostream>

using namespace std;

void fun(int *a,int *b);
int main() {
	int x = 10, y = 20;
	cout << "x is: " << x << " and y is: " << y << endl;
	fun(&x, &y);
	cout << "x is: " << x << " and  y is: " << y << endl;
	cout << "Adress of a: " << &x << " \nAdress of b: " << &y << endl;
}
void fun(int *a,int *b ) {
	*a = 40;
	*b = 30;
}