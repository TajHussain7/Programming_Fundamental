#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	int avg = 0;
	cout << "Enter Average: ";
	cin >> avg;
	ofstream ofile;
	ofile.open("average.txt");
	ofile << "Average is: " << avg;
	ofile.close();
	ifstream ifile;
	ifile.open("average.txt");
	ofstream oofile;
	oofile.open("anotherfile.txt");
	string line;
	while (getline(ifile, line)) {
		if (avg < 4) {
			oofile <<"Below Average..." << endl;
		}
		else if (avg >= 4 && avg <= 6) {
			oofile << "On Average..." << endl;
		}
		else if (avg > 6) {
			oofile << "Above Average..." << endl;
		}
	}
	ifile.close();
	oofile.close();


	return 0;
}