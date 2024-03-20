#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void function() {
	ifstream ifile;
	ifile.open("DataCopy.txt");
	ofstream ofile;
	ofile.open("UpdateCopy.txt");
	string line;
	if (ifile.is_open()) {
		while (getline(ifile, line)) {
			ofile << line << endl;
		}
		cout << "Data Copy Successfully..." << endl;
	}
	else {
		cout << "Error! Data isn't Copy...." << endl;
	}
}
int main() {
	char arr[50];
	cin.get(arr, 50);
	ofstream ofile;
	ofile.open("DataCopy.txt");
	for (int i = 0;arr[i]!='\0'; i++) {
		ofile << arr[i];
	}
	ofile.close();
	function();


	system("pause");
	return 0;
}