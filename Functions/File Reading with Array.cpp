#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ofstream ofile;
	ofile.open("file1.txt");
	ofile << "Hello, this is a sample text file. It has multiple lines. Good luck with your quiz!" << endl;
	ofile.close();
	ifstream ifile;
	ifile.open("file1.txt");
	char arr[60];
	while (ifile>>arr) {
		cout << arr << " ";
	}
	

	cout << endl;
	system("pause");
	return 0;
}