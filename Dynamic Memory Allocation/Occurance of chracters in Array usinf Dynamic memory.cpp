#include<iostream>

using namespace std;

int main() {
	const int size = 200;
	char arr[size];
	cin.get(arr, size);

	int* ch = new int[256];
	for (int i = 0; i < 256; i++) {
		ch[i] = 0;
	}

	for (int i = 0; arr[i]!='\0'; i++) {
		ch[(int)arr[i]]++;
	}

	for (int i = 0; i < 256; i++) {
		if (ch[i] > 0) {
			cout << ch[i] << " is " << char(i) << " times present. " << endl;
		}
	}
	
	delete[] ch;
	ch = nullptr;




	cout << endl;
	system("pause");
	return 0;
}