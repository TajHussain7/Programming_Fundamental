#include<iostream>

using namespace std;

void ascending_order(int *ptr, int n) {
	cout << "Score in Ascending Order is: ";
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (ptr[j] > ptr[j+1]) {
				int temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ptr[i] << " ";
	}
}
void average(int* ptr, int n) {
	int sum = 0;
	float avg = 0.0;
	for (int i = 0; i < n; i++) {
		sum = sum + ptr[i];
	}
	avg = sum / n;
	cout << "Average of Numbers are: " << avg << endl;
}
int main() {
	int n;
	cout << "Enter Your Number of Values: ";
	cin >> n;
	if (n <= 0) {
		cout << "Please Enter a Positive number. " << endl;
		return 0;
	}
	int* ptr = new int[n];
	bool check = true;
	for (int i = 0; i < n; i++) {
		cout << "Enter score of " << i + 1 << " ";
		cin >> ptr[i];
		if (ptr[i] < 0) {
			check = false;
			break;
		}
	}
	if (check == false) {
		cout << "Invalid Input. " << endl;
		return 0;
	}
	ascending_order(ptr, n);
	cout << endl;
	average(ptr, n);




	delete[] ptr;
	ptr = nullptr;


	cout << endl;
	return 0;
}