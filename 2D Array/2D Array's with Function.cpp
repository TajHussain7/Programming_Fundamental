#include<iostream>

using namespace std;
void function(int* ptr[], int rows, int cols) {
	cout << "Origonal Array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << *(*(ptr+i)+j) << " ";
		}
		cout << endl;
	}
}
void reverse(int *ptr[], int rows, int cols) {
	cout << "Array's Elements in reverse Order: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = cols-1; j >= 0; j--) {
			cout<<ptr[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	int rows, cols;
	cout << "Enter Number of rows and column: " << endl;
	cin >> rows >> cols;
	int** ptr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		ptr[i] = new int[cols];
	}
	cout << "Enter " << rows * cols << " Array's Elements: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> ptr[i][j];
		}
	}
	function(ptr,rows,cols);
	reverse(ptr, rows, cols);




	for (int i = 0; i < rows; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
	ptr = nullptr;

	cout << endl;
	system("pause");
	return 0;
}