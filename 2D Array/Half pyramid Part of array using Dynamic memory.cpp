#include<iostream>

using namespace std;

void function(int **array, int rows, int cols) {
	cout << "Half Part of Matrix is : " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i <= j) {
				cout << array[i][j] << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
int main() {
	int rows, cols;
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of column: ";
	cin >> cols;
	int **array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}
	cout << "Enter " << rows*cols << " Array's Elements : " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> array[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	function(array, rows, cols);

	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;

	cout << endl;
	system("pause");
	return 0;
}