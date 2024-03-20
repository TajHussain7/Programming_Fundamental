#include<iostream>

using namespace std;

int main() {
	int array[4][6];

	cout << "Enter Array Elements: ";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> array[i][j];
		}
	}
	int sum;
	cout << "Elements in an Array: " << endl << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Elements in Row ( " << i + 1 << " ) ";
		for (int j = 0; j < 6; j++) {
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		sum = 0;
		for (int j = 0; j < 6; j++) {
			sum = sum + array[i][j];
		}
		cout << "The Sum of Row " << i + 1 << " is " << sum << endl;
	}
	cout << endl;
	return 0;
}