#include<iostream>
#include<fstream>

using namespace std;

void Uper_case(char ch[]) {
	int i;
	for (i = 0; ch[i] != '\0'; i++) {
		if (ch[i] >= 97) {
			ch[i] = ch[i] - 32;
		}
		if (ch[i] <= 65) {
			ch[i] = ch[i] + 32;
		}
		cout << ch[i];
	}
}
int main() {
	ifstream infile;
	infile.open("Animal.txt");
	char ch[30];
	while (infile>>ch) {
		Uper_case(ch);
	}
	infile.close();


	cout << endl;
	system("pause");
	return 0;
}