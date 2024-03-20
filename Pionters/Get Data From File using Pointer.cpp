#include<iostream>
#include<fstream>

using namespace std;

int main() {
	int num = 30;
	int* ptr = &num;
	*ptr = 50;
	ofstream outfile;
	outfile.open("result.txt");
	outfile << *ptr;










	outfile.close();
	cout << endl;
	return 0;
}