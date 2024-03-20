#include<iostream>

using namespace std;
void function(char arr[]);
int main() {
	char array[20];
	cout << "Enter your array of maximum 20 characters: ";
	cin.get(array, 20);
	function(array);

	system("pause");
	return 0;
}
void function(char arr[]) {
	int ascii[256] = { 0 };
	for (int i = 0; i < 20; i++) {
		ascii[arr[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (ascii[i] > 0) {
			cout << "Occurrence of " << arr[i] << " is " << ascii[i] << " times. " << endl;
		}
	}
}