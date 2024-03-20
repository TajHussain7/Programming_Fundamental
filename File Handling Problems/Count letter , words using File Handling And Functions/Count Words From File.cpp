#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void countwords() {
	ifstream ifile;
	ifile.open("Words.txt");
	char arr[50];
	int count = 0;
	while (!ifile.eof()) {
			ifile >> arr;
			count++;
	}
	cout << "Total words are: " << count << endl;
	ifile.close();
}
void countletters() {
	ifstream ifile;
	ifile.open("Words.txt");
	char arr[50];
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		ifile >> arr[i];
		count++;
	}
	cout << "Total letters are: " << count << endl;
	ifile.close();

}
int main() {
	ofstream ofile;
	ofile.open("Words.txt");
	ofile << "Hello This is C++ Programming" << endl;
	ofile.close();
	countwords();
	countletters();
	system("pause");
	return 0;
}