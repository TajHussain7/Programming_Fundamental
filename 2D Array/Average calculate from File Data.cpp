#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("Studentdata.txt");
	if (!infile.is_open()) {
		cout << "File is not opening. " << endl;
	}
	int ID = 0;
	float avg = 0.0;
	int score1 = 0, score2 = 0, score3 = 0;
	while (infile >> ID >> score1 >> score2 >> score3) {
		avg = (score1 + score2 + score3) / 3.0;
		cout << ID << "\t\t" << avg << endl;
	}
                      
                     infile.close();
	cout << endl;
	system("pause");
	return 0;
}