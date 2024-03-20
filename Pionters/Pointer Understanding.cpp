#include<iostream>

using namespace std;

int main() {
	int a = 50;
	int* ptr = &a;
	*ptr = a + 5;
	cout << "Value of a is "<<*ptr << endl;
	cout << "Contents of Pointer: " << ptr << endl;
	cout << "Adress of Pointer: " << &ptr << endl;










	return 0;
}