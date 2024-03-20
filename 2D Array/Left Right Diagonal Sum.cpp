#include<iostream>

using namespace std;

void left_diagonal(int **array, int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == j) {
				sum = sum + array[i][j];
			}
		}
	}
	cout << "Sum of Left Diagonal is : " << sum << endl;
}

void right_diagonal(int **array, int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j<cols; j++) {
			if (i == j) {
				sum = sum + array[i][cols - 1 - i];
			}
		}
	}
	cout << "Sum of Right Diagonal is : " << sum << endl;
}

int main() {
	cout << "Array should be a Square Matrix  " << endl;
	int rows, cols;
	cout << "Number of rows : ";
	cin >> rows;
	cout << "Number of columns : ";
	cin >> cols;
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}
	if (rows == cols) {
		cout << "Enter Array's Elements : " << rows*cols << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cin >> array[i][j];
			}
		}
		cout << "Array's Elements : " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
		left_diagonal(array, rows, cols);
		right_diagonal(array, rows, cols);
	}
	else {
		cout << "Number of Rows and Columns should be same . " << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;

	cout << endl;
	system("pause");
	return 0;
}