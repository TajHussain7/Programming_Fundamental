#include<iostream>;

using namespace std;

void fact(int a) {
	int fact1 = 1;
	for (int i = 1; i <= a; i++) {
		fact1 = fact1 * i;
	}
	cout << "\nFactorial of " << a << " is " << fact1 << endl;
}
int main() {
	int x;
	cout << "Enter your number: ";
	cin >> x;
	fact(x);

	cout << endl;
	system("pause");
	return 0;
}