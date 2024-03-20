#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ofstream outfile;
	outfile.open("Donation.txt");
	int size;
	cout << "How many number of Donations you want to add : ";
	cin >> size;
	int* ID = new int[size];
	string* name = new string[size];
	int* donation = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter ID of " << i + 1 << " Donor : ";
		cin >> ID[i];
		cout << "Enter name of " << i + 1 << " Donor : ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Enter number of Donations of " << i + 1 << " Donor ";
		cin >> donation[i];
	}
	cout << endl;
	int overal_doantions = 0;
	for (int i = 0; i < size; i++) {
		cout << "ID Number of " << i + 1 << " Donor : ";
		cout << ID[i] << endl;
		cout << "Name of " << i + 1 << " Donor : ";
		cout << name[i] << endl;
		cout << "Number of Donations of " << i + 1 << " Donor ";
		cout << donation[i] << endl;
		overal_doantions = overal_doantions + donation[i];
	}
	cout << "Overall Donations are " << overal_doantions << endl;
	for (int i = 0; i < size; i++) {
		outfile << "ID is " << ID[i] << endl;
		outfile << "Name is " << name[i] << endl;
		outfile << "Number of Donations " << donation[i] << endl;
	}
	outfile << "Overall Donations are " << overal_doantions << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; i++) {
			if (donation[j] > donation[j + 1]) {
				int temp = donation[j];
				donation[j] = donation[j + 1];
				donation[j + 1] = temp;
			}
		}
	}
	int max1 = donation[0];
	int max2 = donation[1];
	int max3 = donation[2];
	for (int i = 0; i < size; i++) {
		if (donation[i] == max1) {
			cout << name[i] << " get 100% scholarship. " << endl;
		}
		else
		if (donation[i] == max2) {
			cout << name[i] << " get 75% scholarship. " << endl;
		}
		else
		if (donation[i] == max3) {
			cout << name[i] << " get 50% scholarship. " << endl;
		}
	}
	cout << max1 << " get 100% scholarship " << endl;
	cout << max2 << " get 75% scholarship " << endl;
	cout << max3 << " get 50% scholarship " << endl;






	outfile.close();
	delete[] ID;
	delete[] name;
	delete[] donation;
	ID = nullptr;
	name = nullptr;
	donation = nullptr;
	cout << endl;
	system("pause");
	return 0;
}