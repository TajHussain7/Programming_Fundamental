#include<iostream>

using namespace std;

void decimal_To_binary(int n) {
	int i = 0;
	int arr[11];
	int num = n;
	while (n != 0) {
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	cout << num << " in Binary is ";
	for (i = i - 1; i >= 0; i--) {
		cout << arr[i];
	}
	cout << endl << endl;
}
int main() {
	int n;
	cout << "Enter your number: ";
	cin >> n;
	decimal_To_binary(n);
}