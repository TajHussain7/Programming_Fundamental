#include<iostream>
#include<fstream>

using namespace std;
void function() {
	ifstream ifile;
	ifile.open("CountFile.txt");
	char arr[70];
	int count = 0;
	while(ifile>>arr) {
		count++;
		cout << arr << " ";
	}
	cout << endl << "Total number of words in this file are: " << count << endl;
	ifile.close();
}
int main() {
    ofstream ofile;
	ofile.open("CountFile.txt");
	ofile << "This is C++ Programming Class.";
	ofile.close();
	function();

	cout << endl;
	system("pause");
	return 0;
}