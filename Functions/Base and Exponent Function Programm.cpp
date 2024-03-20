#include<iostream>

using namespace std;

void  function(int base, int exponent) {
	int result = base;
	int i = 0;
	if (base < exponent) {
		i = base;
		while (i<=exponent) {
			result = result * base;
			i++;
		}
		cout << "Your result is: " << result << endl;
	}
	else if (base > exponent) {
		i = exponent;
		while (i>=exponent) {
			result = result * base;
			i--;
		}
		cout << "Your result is: " << result << endl;
	}
}
int main() {
	int base = 0, exponent = 0;
	cout << "Enter your Base value: ";
	cin >> base;
	cout << "Enter your Exponent value: ";
	cin >> exponent;
	function(base, exponent);

	cout << endl;
	system("pause");
	return 0;
}