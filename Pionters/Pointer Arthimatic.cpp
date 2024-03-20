#include<iostream>

using namespace std;

int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr;
	ptr = arr;
	cout << "The value of 1st pointer: " << ptr << endl;
	cout << "The value of 2nd pointer: " << ptr + 1 << endl;
	cout << "The value of 3rd pointer: " << ptr + 2 << endl;
	cout << "The value of 4th pointer: " << ptr + 3 << endl;
	cout << "The value of 5th pointer: " << ptr + 4 << endl;

	system("pause");
	return 0;
}