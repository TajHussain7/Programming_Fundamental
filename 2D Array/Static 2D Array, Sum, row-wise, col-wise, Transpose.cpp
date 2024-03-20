#include<iostream>

using namespace std;

void Input_function(int array[][3], int rows, int cols){
	cout << "Enter " << rows*cols <<" Elements : " << endl;
   for (int i = 0; i < rows; i++) {
	   for (int j = 0; j < cols; j++) {
		   cin >> array[i][j];
	   }
   }
}

void Output_function(int array[][3], int rows, int cols) {
	cout << "Array Elements are : " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

void sum(int array[][3], int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum = sum + array[i][j];
		}
		cout << endl;
	}
	cout << "Sum of Array's Elements are : " << sum << endl;
}

void rowwise_sum(int array[][3], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		int sum = 0;
		for (int j = 0; j < cols; j++) {
			sum = sum + array[i][j];
		}
		cout << "Sum of " << i + 1 << " row is : " << sum << endl;
	}
}

void colwise_sum(int array[][3], int rows, int cols) {
	for (int i = 0; i < cols; i++) {
		int sum = 0;
		for (int j = 0; j < rows; j++) {
			sum = sum + array[j][i];
		}
		cout << "Sum of " << i + 1 << " column is : " << sum << endl;
	}
}

void transpose(int array[][3], int rows, int cols) {
	int transpose[3][2];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transpose[j][i] = array[i][j];
		}
	}
	cout << "Transpose of Matrix is : " << endl;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << transpose[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	const int rows=2, cols=3;

	int array[rows][cols] = { 0 };
	Input_function(array,rows,cols);
	Output_function(array, rows, cols);
	sum(array, rows, cols);
	rowwise_sum(array, rows, cols);
	colwise_sum(array, rows, cols);
	transpose(array, rows, cols);




	cout << endl;
	system("pause");
	return 0;
}