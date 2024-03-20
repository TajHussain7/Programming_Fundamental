#include<iostream>

using namespace std;

void function(int **array, int rows, int cols) {
	cout << "Array Elements are: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	int MaxValue = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] > MaxValue) {
				MaxValue = array[i][j];
			}
		}
	}
	cout << " Max Value at Column Indexes ";
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			if (array[j][i] == MaxValue) {
				cout << i << " ";
				break;
			}
		}
	}
	cout << endl << "Max Value is : " << MaxValue << endl;
}
int main() {
	int rows, cols;
	cout << "Enter Rows : ";
	cin >> rows;
	cout << "Enter Col : ";
	cin >> cols;
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}
	cout << "Enter Array's Elements: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> array[i][j];
		}
	}
	function(array, rows, cols);
	/*cout << "Array Elements are: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	int MaxValue = array[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j] > MaxValue) {
				MaxValue = array[i][j];
			}
		}
	}
	cout << " Max Value at Column Indexes ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (array[i][j]==MaxValue) {
				cout << j << " ";
			}
		}
	}
	cout << endl << "Max Value is : " << MaxValue << endl;*/


	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;

	cout << endl;
	system("pause");
	return 0;
}