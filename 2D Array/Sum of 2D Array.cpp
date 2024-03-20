#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("2DArraydata.txt");
	if (!infile.is_open()) {
		cout << "File is not opening. " << endl;
		return 1;
	}
	int totalsum = 0;
	int array[4][3] = { {0} };
    for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
				infile >> array[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[i][j] << " ";
			totalsum += array[i][j];
		}
		cout << endl;
	}
	cout << "Total sum of all rows is : " << totalsum << endl;




	infile.close();


	cout << endl;
	system("pause");
	return 0;
}