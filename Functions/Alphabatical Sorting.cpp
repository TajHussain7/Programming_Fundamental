#include<iostream>

using namespace std;

int main() {
	const int size = 20;
	char arr[size];
	cout << "Enter Array: ";
	cin.get(arr, size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}






	cout << endl;
	system("pause");
	return 0;
}