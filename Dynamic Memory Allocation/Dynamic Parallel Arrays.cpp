#include<iostream>

using namespace std;

void function(int* ptr1, int* ptr2, int* ptr3, int n, int newsize) {
	for (int i = 0; i < n; ++i) {
		if ((i + 1) % 3 != 0) {
			ptr1[newsize] = ptr1[i];
			ptr2[newsize] = ptr2[i];
			ptr3[newsize] = ptr3[i];
			++newsize;
		}
	}
	cout << endl;
	for (int i = 0; i < newsize; i++) {
		cout << "For Employee " << i + 1 << endl;
		cout << "ID " << ptr1[i] << endl;
		cout << "Year " << ptr2[i] << endl;
		cout << "Salary " << ptr3[i] << endl;
	}
}
int main() {
	int size;
	cout << "Enter Employees: ";
	cin >> size;
	int* ptr1 = new int[size];
	int* ptr2 = new int[size];
	int* ptr3 = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter uer ID of " << i + 1 << " employee: ";
		cin >> ptr1[i];
		cout << "Enter working year of " << i + 1 << " employee: ";
		cin >> ptr2[i];
		cout << "Enter Salary of " << i + 1 << " employee: ";
		cin >> ptr3[i];
	}
	int newsize = 0;
	function(ptr1, ptr2, ptr3, size, newsize);
	cout << endl;
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-i-1; j++) {
			if (ptr1[j] > ptr1[j + 1]) {
				int temp1 = ptr1[j];
				ptr1[j] = ptr1[j + 1];
				ptr1[j + 1] = temp1;

				int temp2 = ptr2[j];
				ptr2[j] = ptr2[j + 1];
				ptr2[j + 1] = temp2;

				int temp3 = ptr3[j];
				ptr3[j] = ptr3[j + 1];
				ptr3[j + 1] = temp3;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << "User ID " << ptr1[i] << endl;
		cout << i + 1 << " Employee year of joining " << ptr2[i] << endl;
		cout << "Salary of " << i + 1 << " Employee " << ptr3[i] << endl;
	}


	delete[] ptr1;
	delete[] ptr2;
	delete[] ptr3;

	cout << endl;
	system("pause");
	return 0;
}