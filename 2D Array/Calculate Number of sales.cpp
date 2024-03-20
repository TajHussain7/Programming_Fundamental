#include<iostream>

using namespace std;

int main() {
	int months = 4, items = 3;
	int array[4][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			cout << "Enter a sale of Item " << i + 1 << " , Month " << j + 1<<" : ";
			cin >> array[i][j];
		}
	}
	cout << endl;
	cout << "Month ";
	for (i = 0; i < 4; i++) {
		cout << i + 1 << " ";
	}
	cout << endl;
	for (i = 0; i < 3; i++) {
		cout << "item" << i + 1 << " ";
		for (j = 0; j < 4; j++) {
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}


	cout << endl;
	system("pause");
	return 0;
}