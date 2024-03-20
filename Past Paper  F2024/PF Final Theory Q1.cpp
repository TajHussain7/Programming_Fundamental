#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("TextFile1.txt");
	if (!infile.is_open()) {
		cout << "File is not opening. " << endl;
	}
	int totalrows = 0;
	infile >> totalrows;
	int** array = new int* [totalrows];
	int cols;
	int largestsum = 0;
	int index = 0;
	for (int i = 0; i < totalrows; i++) {
		int sum = 0;
		infile >> cols;
		array[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			infile >> array[i][j];
		}
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
			sum = sum + array[i][j];
		}
		cout << endl;
		if (sum > largestsum) {
			largestsum = sum;
			index++;
		}
	}
	cout << index << " Caller has Maximum NUmber of call minutes : " << largestsum << endl;



	for (int i = 0; i < totalrows; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = nullptr;

	cout << endl;
	system("pause");
	return 0;
}