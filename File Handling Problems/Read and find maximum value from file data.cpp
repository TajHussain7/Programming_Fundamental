#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("SimpleFile.txt");
	if (!infile.is_open()) {
		cout << "File is not opening. " << endl;
	}
	int row;
	infile >> row;
	int max = 0;
	int array[] = { 0 };
	for (int i = 0; i < row; i++) {
		infile >> array[i];
	}
	for (int i = 0; i < row; i++) {
		cout << array[i] << " ";
		if (max < array[i]) {
			max = array[i];
		}
	}
	cout << endl << "Maximum Value is : " << max << endl;




	cout << endl;
	system("pause");
	return 0;
}