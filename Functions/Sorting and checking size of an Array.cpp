#include<iostream>

using namespace std;
void function(char arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "The result is: " << arr << endl;
	cout << "The size of this array is: " << size << endl;
}
int main() {
	char arr[50];
	cout << "Enter your value: ";
	cin.get(arr, 50);
	int size = 0;
	for (int i = 0; i < arr[i] != '\0'; i++) {
		size++;
	}
	function(arr,size);


	return 0;
}