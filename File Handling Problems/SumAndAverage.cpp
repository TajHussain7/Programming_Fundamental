#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	int array[5];
	int sum=0, avg=0;
	//Writing in a File**************
	ofstream outfile;
	outfile.open("Integer.txt");
	cout << "Enter any Five Numbers: ";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < 5; i++) {
		outfile << array[i] << endl;
	}
	outfile.close();
	//Reading in a File*************
	ifstream infile;
	infile.open("Integer.txt");
	for (int i = 0; i < 5; i++) {
		infile>> array[i];
		sum += array[i];
	}
	avg = sum / 5;
	infile >> sum;
	infile >> avg;
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << avg << endl;
	infile.close();
	//Updating a File
	ofstream outputfile;
	outputfile.open("Result.txt");
	outputfile << "Sum is: " << sum << endl;
	outputfile << "Average is: " << avg << endl;
	outputfile.close();




	system("pause");
	return 0;
}