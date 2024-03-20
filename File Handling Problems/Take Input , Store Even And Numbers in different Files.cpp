#include<iostream>
#include<fstream>
#include<string>

using namespace std;
void function() {
	int arr[10];
	cout << "Enter your roll number: ";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	ofstream ofile;
	ofile.open("roll number.txt");
	for (int i = 0; i < 10; i++) {
		ofile << arr[i] << " " << endl;
	}
	ofile.close();
	ifstream ifile;
	ifile.open("roll number.txt");
	string line;
	while (getline(ifile, line)) {
		cout << line <<" ";
	}
	ifile.close();
	ofstream oofile;
	oofile.open("even rollnumbers.txt");
	ofstream ooofile;
	ooofile.open("odd rollnumbers.txt");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			oofile <<arr[i] << " ";
		}
		else {
			ooofile << arr[i] << " ";
		}
	}
	oofile.close();
	ooofile.close();

}
int main()
{
	function();
}