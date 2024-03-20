#include<iostream>
#include<fstream>

using namespace std;

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ifstream infile;
	infile.open("2DArray Addition.txt");
	if (!infile.is_open()) {
		cout << "File is not Opening. " << endl;
	}
	int row = 3;
	int cols = 3;
	int** array = new int* [row];
	for (int i = 0; i < row; i++) {
		array[i] = new int[cols];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			infile >> array[i][j];
		}
	}
	cout << "Regrow Array : " << endl;
	int newcols = cols + 1;
	int multiple = cols + 1;
	for (int i = 0; i < row; i++) {
		multiple = multiple + i;
		for (int j = 0; j < newcols; j++) {
			if (j == cols) {
				cout << array[i][0] * multiple;
			}
			else {
				cout << array[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << "After Removal of Prime Numbers : " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < newcols; j++) {
			if (!isPrime(array[i][j])) {
				cout << array[i][j] << " ";
			}
		}
		cout << endl;
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