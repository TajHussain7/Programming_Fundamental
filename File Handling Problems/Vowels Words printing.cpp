#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("Animal.txt");
	if (!infile) {
		cout << "File could not open. " << endl;
	}
	ofstream fout;
	fout.open("Animal Copy File.txt");
	const int size = 30;
	char ch[30];
	while (!infile.eof()) {
		infile >> ch;
		if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u' || ch[0] == 'A' || ch[0] == 'E' || ch[0] == 'I' || ch[0] == 'O' || ch[0] == 'U') {
			fout << ch << " ";
		}
	}
	infile.close();
	fout.close();







	cout << endl;
	system("pause");
	return 0;
}