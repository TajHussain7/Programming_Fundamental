#include<iostream>
#include<fstream>

using namespace std;

void read_file(ifstream &infile) {
	char ch;
	char name[20];
	cout << "Enter Animal Name: ";
	cin >> name;
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; name[i] != '\0'; i++) {
		count2++;
	}
	while (infile.get(ch)) {
		count1++;
		if (count1==count2 && ch==' ') {
			break;
		}
	}
	if (count1 == count2) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
}
int main() {
	ifstream infile;
	infile.open("Animal.txt");
	read_file(infile);




	cout << endl;
	system("pause");
	return 0;
}