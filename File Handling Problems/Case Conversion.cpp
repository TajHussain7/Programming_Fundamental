#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main() {
	char str[50];
	cout << "Enter Your Sentence: ";
	cin.get(str, 50);
	//To write in a File********************
	ofstream outfile;
	outfile.open("My  Data.txt");
	outfile << str;

	outfile.close();
	//To read in a File*********************
	ifstream infile;
	infile.open("My Data.txt");
	string line;
	while (getline(infile, line)) {
		infile >> line;
	}
	cout <<"Your Data is:"<< str << endl;
	infile.close();

	//Updated Data***********************
	ofstream outputfile;
	outputfile.open("Converted Data.txt");
	outputfile << str;




	
	
	
	
	
	
	
	system("pause");
	return 0;
}