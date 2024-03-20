#include<iostream>

using namespace std;

int main() {
	const int size = 5;
	int* arr = new int[size];

	cout << "Enter Array Elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	int* arr2 = new int[size];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
		cout << arr2[i] << " ";
	}
	delete[] arr;
	delete[] arr2;






	system("pause");
	return 0;
}