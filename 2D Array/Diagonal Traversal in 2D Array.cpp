#include<iostream>

using namespace std;

void Backward_diagonal(int array[][3], int rows, int cols) {
	cout << "Backward Diagonal : " << endl;
	for (int i = 0; i < rows; i++) {
		cout << array[i][cols - 1 - i] << " ";
	}
}
int main() {
	int array[3][3] = { {1,2,4},{3,4,8},{7,9,10} };
	cout << "Original Array : " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Reversed Array : " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 2; j>=0; j--) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	Backward_diagonal(array,3,3);




	cout << endl;
	system("pause");
	return 0;
}