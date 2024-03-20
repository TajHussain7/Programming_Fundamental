#include<iostream>

using namespace std;

void function(int *ptr1, int*ptr2, int *ptr3, int n, int newsize) {
	for (int i = 0; i < n; ++i) {
		if ((i + 1) % 3 != 0) {
			ptr1[newsize] = ptr1[i];
			ptr2[newsize] = ptr2[i];
			ptr3[newsize] = ptr3[i];
			++newsize;
		}
	}
	cout << endl;
	for(int i = 0; i < newsize; i++) {
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
		cout << "Enter uer ID of "<<i + 1 << " employee: ";
		cin >> ptr1[i];
		cout << "Enter working year of " << i + 1 << " employee: ";
		cin >> ptr2[i];
		cout << "Enter Salary of " << i + 1 << " employee: ";
		cin >> ptr2[i];
	}
	int newsize = 0;
	function(ptr1,ptr2,ptr3, size, newsize);







	delete[] ptr1;
	delete[] ptr2;
	delete[] ptr3;

	cout << endl;
	system("pause");
	return 0;
}