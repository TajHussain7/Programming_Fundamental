#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	char str[100] = "Our mission is to provide quality education around the world!";
	ofstream outfile;
	outfile.open("University Data.txt");
	outfile << str;
	outfile.close();
	ifstream infile;
	infile.open("University Data.txt");
	string line;
	while (getline(infile,line)) {
		cout << line << endl;
	}
	infile.close();
}
