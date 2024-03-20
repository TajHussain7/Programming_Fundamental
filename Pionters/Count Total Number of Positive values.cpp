#include<iostream>

using namespace std;

void positive(int arr1[]) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (arr1[i] > 0) {
			count++;
		}
	}
	cout << "Total number of positive integers: " << count << endl;
}
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter " << i + 1 << " element: ";
		cin >> arr[i];
	}
	positive(arr);

	system("pause");
	return 0;
}