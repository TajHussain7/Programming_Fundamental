#include<iostream>
#include<fstream>

using namespace std;

string function(ifstream &infile) {
	string line;
	string reversed;
	while (infile>>line) {
		for (int i = 0; line[i] != '\0'; i++) {
			reversed = line[i] + reversed;
		}
	}
	return reversed;
}
int main() {
	ifstream infile;
	infile.open("file.txt");
	string reversed=function(infile);
	cout << reversed<< endl;
	ofstream ofile;
	ofile.open("reversed.txt");
	ofile << "Reverded order is: "<<reversed;



	cout << endl;
	system("pause");
	return 0;
}