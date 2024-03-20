#include<iostream>
#include<fstream>

using namespace std;

void function(char arr[], int word) {
	for (int i = 0; i < word; i++) {
		for (int j = 0; j < word - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < word; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
	ifstream infile;
	infile.open("Animal.txt");
	if (!infile.is_open()) {
		cout << "File could not open. " << endl;
	}
	const int size = 60;
	char arr[size];
	int word = 0;
	while (infile >> arr[word]) {
		//function(arr,word);
		word++;
	}
	function(arr, word);
	
	infile.close();




	cout << endl;
	system("pause");
	return 0;
}