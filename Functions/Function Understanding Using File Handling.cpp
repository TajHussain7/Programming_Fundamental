#include<iostream>
#include<fstream>

using namespace std;

int sum_numbers(ifstream &infile, int &count,int &sum) {
	int array[20];
	infile.open("file.txt");
	int i = 0;
	while (infile >> array[i]) {
		sum = sum + array[i];
		count++;
	}
	return sum;
	infile.close();
}
int average_numbers(int count, float &average, int sum) {
	average = sum / count;
	return average;
}
void min_max_number(ifstream &infile) {
	infile.open("file.txt");
	int array[20];
	int i = 0;
	while (infile >> array[i]) {
		cout << array[i];
	}
	infile.close();
}
int main() {
	ifstream infile;
	infile.open("file.txt");
	if (!infile.is_open()) {
		cout << "Error opening file. " << endl;
	}
	int array[20];
	int addition = 0;
	int count = 0;
	int sum = 0;
	cout << "Number in a file. " << endl;
	int i = 0;
	int max_num = 0;
	int min_num = 0;
	while (infile >> array[i]) {
		cout << array[i] << endl;
		if (array[i] > array[i + 1]) {
			max_num = array[i];
		}
		else 
        if (array[i] < array[i + 1] ){
			min_num = array[i];
		}
	}
	infile.close();
	infile.ignore();
	addition=sum_numbers(infile,count,sum);
	cout << "Sum of numbers is: " << addition << endl;
	cout << "Total numbers are in file: " << count << endl;
	float average = 0.0;
	average = average_numbers(count, average,sum);
	cout << "Average of numbers is: " << average << endl;
	cout << "Maximum Number is: " << max_num << endl;
	cout << "Minimum Number is: " << min_num << endl;

	ofstream ofile;
	ofile.open("update file.txt");
	ofile << "Sum of numbers are: " << addition << endl;
	ofile << "Average of numbers are: " << average << endl;
	ofile << "Maximum Number is: " << max_num << endl;
	ofile << "Minimum Number is: " << min_num << endl;
	ofile.close();


	cout << endl;
	system("pause");
	return 0;
}