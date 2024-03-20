#include<iostream>

using namespace std;

void find_luckyNum(int num) {
	int n;
	n = num;
	int digit;
	int reverse = 0;
	while (num != 0) {
		digit = num % 10;
		reverse = (reverse * 10) + digit;
		num = num / 10;
	}
	if (n == reverse) {
		cout << "This is a lucky number...." << endl;
	}
	else {
		cout << "This is not a lucky number...." << endl;
	}
}
void find_luckyChar(char ch1[]) {
	bool check=true;
	for (int i = 0; i<10; i++) {
		if (ch1[i]!=ch1[10-1-i]) {
			check = false;
			break;
		}
	}
	if (check == true) {
		cout << "This is a lucky character..." << endl;
	}
	else{
		cout << "This is not a lucky character..." << endl;
	}
}
int main() {
	int x;
	char ch[10] = { 0 };
	int press = 0;
	cout << "To check Palindrome, Press 1 to Enter a Number or 2 to Enter a character:  ";
	cin >> press;
	if (press == 1) {
		cout << "Enter your Number: ";
		cin >> x;
		find_luckyNum(x);
	}
	else if (press == 2) {
		cout << "Enter your character: ";
		cin >> ch;
		find_luckyChar(ch);
	}


	cout << endl;
	system("pause");
	return 0;
}