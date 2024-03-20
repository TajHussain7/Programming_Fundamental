#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ofstream outfile;
	outfile.open("Integer.txt");
	int arr[6] = { 2,3,4,5,6,7 };
	for (int i = 0; i < 6; i++) {
		outfile << arr[i] << " ";
	}
	outfile.close();
	ifstream infile;
	infile.open("Integer.txt");
	int arr1[6];
	int i = 0;
	bool check = true;
	int largest;
	while (infile >> arr1[i]) {
		if ((arr1[i] % 2 != 0) && arr1[0]<arr1[i]) {
			cout << arr1[i] << " ";
		}
		i++;
	}


	infile.close();
	cout << endl;
	system("pause");
	return 0;
}