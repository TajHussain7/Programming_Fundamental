#include<iostream>

using namespace std;

void function(int array[][4], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void function1(int (*array)[4], int rows, int cols) {
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void func3(int **ptr, int rows, int cols) {
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	int array[3][4];
	cout << "Enter Array's Elements: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> array[i][j];
		}
	}
	function(array,3,4);
	function1(array, 3, 4);
	int** ptr = new int*[3];
	for (int i = 0; i < 3; i++) {
		ptr[i] = new int[4];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			ptr[i][j] = array[i][j];
		}
		cout << endl;
	}
	func3(ptr, 3, 4);
for(int i=0;i<3;i++){
delete[] ptr[i];
}
delete[] ptr;
ptr=nullptr;






	cout << endl;
	system("pause");
	return 0;
}