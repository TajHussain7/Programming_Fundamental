#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream infile;
	infile.open("Student data.txt");
	ofstream ofile;
	ofile.open("reverse data.txt");
	const int max_lenght = 1000;
	string line[max_lenght];
	int number = 0;
	if (infile && ofile) {
		while (getline(infile, line[number]) && number < max_lenght) {
			number++;
		}
		for (int i = number - 1; i >= 0; i--) {
			ofile << line[i] << endl;
		}
		infile.close();
		ofile.close();
		cout << "File data transfer successfully." << endl;
	}
	else {
		cout << "File data not transfered. " << endl;
	}


	cout << endl;
	system("pause");
	return 0;
}