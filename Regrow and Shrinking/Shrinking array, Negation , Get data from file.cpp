#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("Negatefile.txt");
	if (!infile.is_open()) {
		cout << "Text file is not open successfully. " << endl;
		return 1;
	}
	int rows = 0;
	infile >> rows;
	int* array = new int[rows];
	for (int i = 0; i < rows; i++) {
		infile >> array[i];
	}
	for (int i = 0; i < rows; i++) {
		if (array[i] > 0) {
			array[i] = -array[i];
		}
	}
	cout << "After Inserting Negative values : " << endl;
	for (int i = 0; i < rows; i++) {
		cout << array[i] << " ";
	}
	int shrinksize = 0;
	for (int i = 0; i < rows; i++) {
		if (array[i] % 2 == 0) {
			shrinksize++;
		}
	}
	for (int i = 0; i < rows; i++) {
		if (array[i] % 2 == 0) {
			for (int j = i; j < rows - 1; j++) {
				array[j] = array[j + 1];
			}
		}
	}
	cout << endl << "After removing even numbers : " << endl;
	for (int i = 0; i < shrinksize; i++) {
		cout << array[i] << " ";
	}

	delete[] array;
	infile.close();

	cout << endl;
	system("pause");
	return 0;
}