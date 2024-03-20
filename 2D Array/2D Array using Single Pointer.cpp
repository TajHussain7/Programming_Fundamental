#include<iostream>

using namespace std;

int* function(int *array, int rows, int cols) {
	cout << "Enter "<<rows*cols<<" Elements: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> *(array+i*cols+j);
		}
	}
	return array;
}
int main() {
	int rows, cols;
	cout << "Enter number os rows and columns: ";
	cin >> rows >> cols;
	int* matrix = new int[rows * cols];
	function(matrix,rows,cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout <<*(matrix+i*cols+j)<< " ";
		}
		cout << endl;
	}


delete[] matrix;
	system("pause");
	return 0;
}