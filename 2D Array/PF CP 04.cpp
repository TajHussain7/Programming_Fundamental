#include<iostream>

using namespace std;

//Function 01--------
void PassingArray(int arr[][2], int rows, int cols) {
	cout << "Element of Array's Pssing By function: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << *(*(arr+i)+j) << " ";
		}
		cout << endl;
	}
}
//Function 02----------
void PassingArrayByPointer(int (*arr)[2], int rows, int cols) {
	cout << "Elements of Array's Using Pointer: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
//Function 03-----------
void PassingArrayByDoublePOinter(int **arr, int rows, int cols) {
	cout << "Elements of Array's Using Double Pointer: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
//---------------
int main() {
	int arr[3][2];
	cout << "Enter Array's Elements: ";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	//Passing Array To Function***************
	PassingArray(arr, 3, 2);

	//Passing Array To Function Using Pointer************
	PassingArrayByPointer(arr,3,2);

	//Passing Array To Function Using Double POinter************
	int** array = new int* [3];
	for (int i = 0; i < 3; i++) {
		array[i] = new int[2];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			array[i][j] = arr[i][j];
		}
	}
	PassingArrayByDoublePOinter(array,3,2);
	for (int i = 0; i < 3; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;



	cout << endl;
	system("pause");

	return 0;
}