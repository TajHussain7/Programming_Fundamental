#include<iostream>
#include<fstream>

using namespace std;
void function1(int &x, int &y) {
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter a Power: ";
	cin >> y;
}
int function2(int base, int exponent, int &result){
	int i = 0;
	result = base;
	if (base <= exponent) {
		i = base;
		while (i <= exponent) {
			result = result * base;
			i++;
		}
		return result;
	}
	if (base > exponent) {
		i = exponent;
		while (i<base) {
			result = result * base;
			i++;
		}
		return result;
	}
}
void function3(int result) {
	cout << "The Power is: " << result << endl;
}
int main() {
	int num = 0;
	int power = 0;
	int result = 0;
	function1(num, power);
	function2(num, power, result);
	function3(result);


	cout << endl;
	system("pause");
	return 0;
}