#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("SaleRecord.txt");
	if (!infile.is_open()) {
		cout << "File is not Opening. " << endl;
		return 1;
	}
	int sale1 = 0, sale2 = 0, sale3 = 0;
	char c;
	int totalsales = 0;
	while (infile >> c >> sale1 >> sale2 >> sale3) {
		totalsales= sale1 + sale2 + sale3;
		cout << c << "\t\t" << totalsales << endl;
	}


	infile.close();

	cout << endl;
	system("pause");
	return 0;
}