#include<iostream>

using namespace std;

void day(int day);
int main() {
	int number = 0;
	cout << "Entre weekday number (1-7) : ";
	cin >> number;
	day(number);


	system("pause");
	return 0;
}
void day(int day) {
	if (day == 1) {
		cout << "Monday" << endl;
	}
	else if (day == 2) {
		cout << "Tuesday" << endl;
	}
	else if (day == 3) {
		cout << "Wednesday" << endl;
	}
	else if (day == 4) {
		cout << "Thursday" << endl;
	}
	else if (day == 5) {
		cout << "Friday" << endl;
	}
	else if (day == 6) {
		cout << "Saturday" << endl;
	}
	else if (day == 7) {
		cout << "Sunday" << endl;
	}
}