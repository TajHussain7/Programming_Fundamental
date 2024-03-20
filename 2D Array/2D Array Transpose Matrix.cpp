#include<iostream>

using namespace std;

void populate_array(int **ptr , int rows, int cols) {
	cout << "Enter " << rows * cols << " Elements: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> ptr[i][j];
		}
	}
}
void disp_array(int** ptr, int rows, int cols) {
	cout << "OUTPUT IS : " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << "\n";
	}
}
int **transpose_array(int **ptr, int rows, int cols) {
	int** transpose_array = new int* [cols];
	for (int i = 0; i < cols; i++) {
		transpose_array[i] = new int[rows];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transpose_array[j][i] = ptr[i][j];
		}
	}
	return transpose_array;
	for (int i = 0; i < cols; i++) {
		delete[] transpose_array[i];
	}
	delete[] transpose_array;
	transpose_array = nullptr;
}
int main() {
	int rows, cols;
	cout << "Enter Number of Rows and Column: ";
	cin >> rows >> cols;
	int** ptr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		ptr[i] = new int[cols];
	}
	populate_array(ptr, rows, cols);
	disp_array(ptr, rows, cols);
	ptr=transpose_array(ptr, rows, cols);

	cout << "Transpose of 2D Array is: " << endl;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < rows; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
	ptr = nullptr;


	cout << endl;
	system("pause");
	return 0;
}