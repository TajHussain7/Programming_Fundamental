#include<iostream>

using namespace std;


int main() {
	int n;
	cout << "Enter Array size: ";
	cin >> n;
	int* ptr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter your " << i + 1 << " Element: ";
		cin >> ptr[i];
	}
	int sum = 0;
	float avg = 0.0;
	for (int i = 0; i < n; i++) {
		sum += ptr[i];
	}
	avg = sum / n;
	cout << "Average of Numbers is: " << avg << endl;
	cout << "Size of Dynamic Memory is: " << n*sizeof(ptr) << endl;


	delete[] ptr;
	ptr = nullptr;
	cout << "Size of Dynamic Memory is: " << sizeof(ptr) << endl;




	cout << endl;
	system("pause");
	return 0;
}