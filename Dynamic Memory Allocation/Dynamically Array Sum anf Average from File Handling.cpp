#include<iostream>
#include<fstream>

using namespace std;

void function(int* ptr, int n) {
	int sum = 0;
	float avg = 0.0;
	for (int i = 0; i < 3; i++) {
		sum += ptr[i];
	}
	avg = float(sum) / 3.0;
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << avg << endl;
}
int main() {
	ifstream infile;
	infile.open("data.txt");
	int* ptr = new int[3];
	for (int i = 0; i < 3; i++) {
		infile >> ptr[i];
	}
	function(ptr, 3);
	
	infile.close();

	delete[] ptr;
	ptr = nullptr;

	cout << endl;
	return 0;
}