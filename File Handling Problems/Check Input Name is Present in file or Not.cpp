#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void function(string line[]) {
	ifstream ifile;
	ifile.open("readfile.txt");
	string line1;
	bool found = false;
	while (getline(ifile, line1)) {
		ifile >> line1;
	}
	char arr[10];
	cin >> arr;
	int i;
	for (i = 0; i < 10; i++) {
		if (arr[i] == line1[i]) {
			found = true;
			break;
		}
	}
	cout << arr[i] << " is Present in this file. " << endl;

}
int main()
{
	ofstream ofile;
	ofile.open("readfile.txt");
	string line[10] = { "Ali","Ahmed","Zain","Hadi","Ayan","Saif","Sabtain","Tajamal","Hamza","Hussnain" };
	for (int i = 0; i < 10; i++) {
		ofile << line[i] << " " << endl;
	}
	ofile.close();
	function(line);


	system("pause");
	return 0;
}