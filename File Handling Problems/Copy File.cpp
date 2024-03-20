#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ofstream ofile;
	ofile.open("copy.txt");
	ofile << "This is file related to C++ programming. ";
	ofile.close();
	ifstream ifile;
	ifile.open("copy.txt");
	ofstream outfile;
	outfile.open("update.txt");
	string line;
	if (ifile && ofile) {
		while (getline(ifile, line)) {
			outfile << line << endl;
		}
		cout << "Data copied successfully. " << endl;
	}
	else {
		cout << "Error...... " << endl;
	}
	ifile.close();
	outfile.close();

	return 0;
}