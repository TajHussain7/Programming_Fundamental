#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	char str[100] = "Hard Work is a key to success.";
	ofstream outfile;
	outfile.open("Sample Data.txt");
	outfile << str;
	outfile.close();
	ifstream infile;
	infile.open("Sample Data.txt");
	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}


















	system("pause");
	return 0;
}