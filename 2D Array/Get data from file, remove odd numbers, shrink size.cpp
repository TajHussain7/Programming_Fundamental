#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("Find Prime Number.txt");
	if (!infile.is_open()) {
		cout << " File is not opening. " << endl;
		return 1;
	}

	int row = 0;
	infile >> row;
	int* array = new int[row];
	for (int i = 0; i < row; i++) {
		infile >> array[i];
	}
	int shrinksize = 0;
	for (int j = 0; j < row; j++) {
		if (array[j] % 2 != 0) {
			for (int i = j; i < row - 1; i++) {
				array[i] = array[i + 1];
			}
			shrinksize++;
		}
	}
	cout << "After Removal Odd Numbers, Array's Elements are : " << endl;
	for (int i = 0; i < shrinksize; i++) {
		cout << array[i] << " ";
	}
	cout << endl;



	delete[] array;



	cout << endl;
	system("pause");
	return 0;
}