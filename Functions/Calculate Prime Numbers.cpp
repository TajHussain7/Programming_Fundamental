#include<iostream>

using namespace std;
void function(int a,int b);
int main()
{
	int a, b;
	cout << "Enter your first value: ";
	cin >> a;
	cout << "Enter your second value: ";
	cin >> b;
	function(a, b);

	system("pause");
	return 0;
}
void function(int a, int b) {
	for (int i = a; i <= b; i++) {
		int j;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j==i) {
			cout << i << endl;
		}
	}
}