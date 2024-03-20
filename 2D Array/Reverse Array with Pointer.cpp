#include<iostream>

using namespace std;

int main() {
	int array[5] = { 1,4,2,3,9 };
	int* ptr = array;
	/*for (int i = 0; i < 5; i++) {
		cout << *ptr << " ";
		ptr++;
	}
	ptr = &array[4];
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << *ptr << " ";
		ptr--;
	}*/
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << ptr[i] << " ";
	}
	cout << endl;
	for (int i = 4; i >=0; i--) {
		cout << ptr[i] << " ";
	}







	cout << endl;
	system("pause");
	return 0;
}