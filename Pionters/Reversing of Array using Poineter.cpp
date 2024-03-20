#include<iostream>

using namespace std;

int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	cout << "Elements in an Original Array: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;
	cout << "Elements in Reverse Array: " << endl;
	for (int i = 4; i >= 0; i--) {
		cout << *(ptr + i) << " ";
	}







	return 0;
}