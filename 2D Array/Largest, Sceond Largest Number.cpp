#include<iostream>

using namespace std;

void function(int **ptr,int rows,int cols,int &largest) {
	largest = **ptr;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (ptr[i][j] > largest) {
				largest = ptr[i][j];
			}
		}
	}
	cout << "Largest Number is: " << largest << endl;
	int secondLargest = *(*ptr+1);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (ptr[i][j] < largest && ptr[i][j] > secondLargest) {
				secondLargest = ptr[i][j];
			}
		}
	}
	cout << "Second Largest Number is: " << secondLargest << endl;
}
int main() {
	int rows, cols;
	cout << "Enter Array's Rows: ";
	cin >> rows;
	cout << "Enter Array's Column: ";
	cin >> cols;
	int** ptr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		ptr[i] = new int[cols];
	}
	cout << "Enter Array Elements: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> ptr[i][j];
		}
	}
	int largest = 0;
	function(ptr,rows,cols,largest);

	for (int i = 0; i < rows; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
	system("pause");
	return 0;
}