#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream outfile;
	outfile.open("Result.txt");
	if (!outfile.is_open()) {
		cout << "File is not open. " << endl;
	}
	int n = 5;
	int* ptr = &n;
	*ptr = n + 10;
	outfile << "The Sum is " << *ptr << endl;
	cout << *ptr << endl;
	*ptr = n - 5;
	outfile << "The Difference is " << *ptr << endl;
	cout << *ptr << endl;
	*ptr = n * 5;
	outfile << "The Multiplication is " << *ptr << endl;
	cout << *ptr << endl;
	*ptr = n / 5;
	outfile << "The Division is " << *ptr << endl;
	cout << *ptr << endl;






	outfile.close();
	cout << endl;
	system("pause");
	return 0;
}