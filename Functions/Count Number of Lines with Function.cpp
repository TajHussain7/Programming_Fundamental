#include<iostream>
#include<fstream>

using namespace std;

void function(){
	ifstream infile;
	infile.open("data.txt");
	int count = 0;
	for (int i = 0; !infile.eof(); i++) {
		count++;
	}
	cout << "Number of lines are: " << count << endl;
	infile.close();

}
int main() {
	ofstream ofile;
	ofile.open("data.txt");
	ofile << "This is a C++ Program.I do practice and dealing with Functions and File Handling.Ok Bye.";
	ofile.close();
	function();







	system("pause");
	return 0;
}