#include<iostream>

using namespace std;

void function(int arr[], int size) {
	cout << "Enter array elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10-2; i++) {
		int sum = arr[i] + arr[i + 1] + arr[i + 2];
		if (sum == 0) {
			cout << arr[i] << " , " << arr[i + 1] << " , " << arr[i + 2] << " , " << endl;
		}
	}
}
int main() {
	const int size = 10;
	int arr[size];
	function(arr, size);

	cout << endl;
	system("pause");
	return 0;
}