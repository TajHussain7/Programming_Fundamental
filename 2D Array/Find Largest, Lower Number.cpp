#include<iostream>

using namespace std;

int main() {
	int rows, col;
	cout << "Enter your Rows: ";
	cin >> rows;
	cout << "Enter your Column: ";
	cin >> col;
	int** ptr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		ptr[i] = new int[col];
	}
	cout << "Enter array element: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cin >> ptr[i][j];
		}
	}
	int largestNumber = **ptr;
	int lowerNumber = **ptr;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			if (ptr[i][j]>largestNumber) {
				largestNumber = ptr[i][j];
			}
			if (ptr[i][j] < lowerNumber) {
				lowerNumber = ptr[i][j];
			}
		}
	}
	cout << "Largest Number: " << largestNumber << endl;
	cout << "Lowest Number: " << lowerNumber << endl;

	for (int i = 0; i < rows; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;

	cout << endl;
	system("pause");
	return 0;
}