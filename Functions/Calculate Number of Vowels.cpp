#include<iostream>
#include<fstream>
#include<string>

using namespace std;
void function(char arr[]) {
	ifstream ifile;
	ifile.open("vowel.txt");
	int vowel = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
			vowel++;
		}
	}
	cout << "Numbers of Vowels are: " << vowel << endl;
}

int main() {
	char arr[50];
	cout << "Enter your value: ";
	cin.get(arr, 50);
	ofstream ofile;
	ofile.open("vowel.txt");
	ofile << arr;
	function(arr);

	return 0;
}