#include<iostream>

using namespace std;

int main() {
	int array[3][4];
	cout << "Enter "<<3*4<<" Input Array : " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> array[i][j];
		}
	}
	cout << "Output is: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Transpose is : " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}



	return 0;
}