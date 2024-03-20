#include<iostream>

using namespace std;

void fill(int** array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i <= j) {
				array[i][j] = 1;
			}
			else {
				array[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}
void print(int** array, int size) {
	cout << "Array's Elements are : " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
}
int main() {
	int size = 3;
	int** array = new int*[size];
	for (int i = 0; i < size; i++) {
		array[i] = new int[size];
	}
	fill(array, size);
	print(array, size);






	cout << endl;
	system("pause");
	return 0;
}