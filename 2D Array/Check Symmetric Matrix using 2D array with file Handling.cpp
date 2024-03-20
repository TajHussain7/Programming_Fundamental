#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("matrix.txt");
	if (!infile.is_open()) {
		cout << "File is not opening. " << endl;
		return 1;
	}
	int row = 3;
	int col = 3;
	int **array = new int*[row];
	for (int i = 0; i < row; i++) {
		array[i] = new int[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			infile >> array[i][j];
		}
	}
	cout << "Originol Matrix : " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Transpose Matrix : " << endl;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	bool symmetric = true;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			if (array[i][j] != array[j][i]) {
				symmetric = false;
				break;
			}
		}
		if (!symmetric) {
			break;
		}
	}
	if (symmetric) {
		cout << "Matrix is symmetric. " << endl;
	}
	else {
		cout << "Matrix is symmetric. " << endl;
	}



	for (int i = 0; i < row; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;

	infile.close();

	cout << endl;
	system("pause");
	return 0;
}