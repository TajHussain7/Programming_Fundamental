#include<iostream>

using namespace std;

int main() {
	int a = 20;
	int b = 30;
	int* pointer1;
	pointer1 = &a;
	int* pointer2;
	pointer2 = &b;
	int** pointer3;
	pointer3 = &pointer1;
	cout << " a value is: " << a << endl;
	cout << " b value is: " << b << endl;
	cout << "Adress of a is: " << &a << endl;
	cout << "Adress of b is: " << &b << endl << endl;
	cout << "First Pointer variable is: " << pointer1 << endl;
	cout << "The address of a is stored......" << endl << endl;
	cout << "First *Pointer variable is: " << *pointer1 << endl;
	cout << "Value of a is stored............" << endl << endl;
	cout << "Adress of 1st pointer is: " << &pointer1 << endl << endl;
	cout << "Second Pointer variable is: " << pointer2 << endl;
	cout << "Adress of 2nd pointer is: " << &pointer2 << endl;
	cout << "Adress of b is stored..............." << endl << endl;
	cout << "Second *Pointer variable is: " << *pointer2 << endl;
	cout << "Value of b is stored....................." << endl << endl;
	cout << "..............................................." << endl << endl;
	cout << "Third pointer variable is: " << pointer3 << endl;
	cout << "Adress of Pointer 1 is stored.........." << endl;
	cout << "Adress of 3rd pointer is: "<< & pointer3 << endl;
}