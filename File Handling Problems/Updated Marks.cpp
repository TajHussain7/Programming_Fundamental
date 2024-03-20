#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	ifstream infile;
	infile.open("marks.txt");
	string line;
	ofstream outfile;

	outfile.open("Updated Marks.txt");
	while (getline(infile, line)) {
		outfile << line << endl;
	}

















	system("pause");
	return 0;
}