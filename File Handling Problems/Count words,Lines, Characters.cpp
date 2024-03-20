#include<iostream>
#include<fstream>

using namespace std;
//Count words from a file*************
void function(ifstream &infile) {
	char arr[30];
	int count = 0;
	while (!infile.eof()) {
		infile >> arr;
		count++;
	}
	cout << "Number of words : " << count << endl;
	infile.close();
}
//Count Letters & Characetrs from a file*************
void function1() {
	ifstream infile;
	infile.open("data.txt");
	char ch ;
	int count = 1;
	int ch1 = 0;
	while (infile.get(ch)) {
		if (ch == ' ' || ch == '.') {
			continue;
		}
		ch1++;
		if (ch == '\n') {
			count++;
		}
	}
	cout << "Total characters are: " << ch1 << endl;
	cout << "Number of lines : " << count << endl;
	infile.close();
}
//Count lines starting from A/a*************
void function2() {
	ifstream infile;
	infile.open("data.txt");
	int count = 0;
	char arr[50];
	while (infile.getline(arr, 50)) {
		if (arr[0] == 'A' || arr[0] == 'a') {
			count++;
		}
	}
	cout << "Number of lines starting from A/a: " << count << endl;
	infile.close();
}
int main() {
	ifstream infile;
	infile.open("data.txt");
	function(infile);
	function1();
	function2();



	infile.close();
	cout << endl;
	system("pause");
	return 0;
}