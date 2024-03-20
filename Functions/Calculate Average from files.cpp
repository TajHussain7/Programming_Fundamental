#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream outfile;
	outfile.open("average.txt");
	int arr[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++) {
		outfile << arr[i] << " ";
	}
	outfile.close();
	ifstream infile;
	infile.open("average.txt");
	int sum = 0;
	float avg = 0.0;
	const int max_lenght = 50;
	int arr2[max_lenght];
	int count = 0;
	int i = 0;
	while((infile>>arr2[i]) && i<max_lenght) {
		sum = sum + arr2[i];
		count++;
		i++;
	}
	avg = sum / count;
	cout << "the average of numbers are: " << avg << endl;
	cout << "The sum of " << count << " numbers are: " << sum << endl;
	infile.close();
	ofstream ofile;
	ofile.open("Average Transfer.txt");
	ofile << "The average from number of Average.txt file is: " << avg << endl;
	ofile.close();


    cout << endl;
	system("pause");
	return 0;
}