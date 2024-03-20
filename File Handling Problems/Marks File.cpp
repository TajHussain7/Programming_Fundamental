#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	int array[10];
	//Writing in a File
	ofstream outfile;
	outfile.open("marks.txt");
	cout << "Enter the marks of the students: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < 10; i++) {
		outfile << array[i] << endl;
	}
	outfile.close();

	//Reading From a file
	cout << endl;
	ifstream infile;
	infile.open("marks.txt");
	for (int i = 0; i < 10; i++) {
		infile >> array[i];
	}
	infile.close();
	//Output on a console
	cout << "The marks of the students are: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}