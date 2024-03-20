#include<iostream>

using namespace std;

int function(int i) {
	if (i == 0 || i == 1) {
		return i;
	}
	else {
		return function(i - 1) + function(i - 2);
	}
}
int main() {
	for (int i = 0; i < 10; i++) {
		cout << "Fabonacci of " << i << " is " << function(i) << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}