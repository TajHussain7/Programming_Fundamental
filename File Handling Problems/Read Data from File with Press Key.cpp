#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream infile;
	infile.open("data.txt");

	if (!infile.is_open()) {
		cerr << "Error opening the file." << endl;
		return 0;
	}
	const int size = 50;
	int array[size];
	int i = 0;
	while (true) {
		char choice;
		cout << "Press 'Y' to read data from the file and 'N' to terminate reading: ";
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			if (infile >> array[i]) {
				cout << "Data Read Successfully." << endl;
				cout << "Display Array: ";
				for (int j = 0; j <= i; ++j) {
					cout << array[j] << " ";
				}
				cout << endl;
				i++;
			}
			else {
				cout << "All Data Reading completed. " << endl;
				break;
			}
		}
		else if (choice == 'N' || choice == 'n') {
			cout << "Reading Terminated." << endl;
			break;
		}
		else {
			cout << "Invalid choice. Please enter 'Y' or 'N'." << endl;
		}
	}

	infile.close();

	cout << endl;
	system("pause");
	return 0;
}
