#include<iostream>
#include<fstream>

using namespace std;

void function(ifstream &infile) {
	const int ascii = 256;
	int arr[ascii] = { 0 };
	char ch;
	while (infile.get(ch)) {
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			arr[ch]++;
		}
	}
	for (int i = 0; i < ascii; i++) {
		if (arr[i] > 0) {
			cout << char(i) << " is " << arr[i] << endl;
		}
	}
}
int main() {
	ifstream infile;
	infile.open("file.txt");
	if (!infile.is_open()) {
		cout << "Error opening file " << endl;
	}
	function(infile);




	cout << endl;
	system("pause");
	return 0;
}