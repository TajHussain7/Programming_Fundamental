#include<iostream>
#include<fstream>

using namespace std;

void sum(int *p1, int *p2, int *p3) {
	int sum = 0;
	sum = *p1 + *p2 + *p3;
	cout << "SUm of these numbers are: " << sum << endl;
}
int main() {
	ifstream infile;
	infile.open("File.txt");
	if (!infile.is_open()) {
		cout << "Error Opening File. " << endl;
	}
	int* p1 = new int(0);
	int* p2 = new int(0);
	int* p3 = new int(0);
	infile >> *p1;
	infile >> *p2;
	infile >> *p3;
	sum(p1, p2, p3);

        delete p1;
        delete p2;
        delete p3;
        p1=nullptr;
        p2=nullptr;
        p3=nullptr;
        infile.close();
	cout << endl;
	system("pause");
	return 0;
}