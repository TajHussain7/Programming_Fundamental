#include<iostream>

using namespace std;

void function(float array[]);
int main()
{
	float array[5];
	cout << "Enter the values of Array: ";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}
	function(array);


	return 0;
}
void function(float array[])
{
	float sum = 0;
	float avg = 0;
	for (int i = 0; i < 5; i++) {
		sum = sum + array[i];
	}
	avg = sum / 5;
	cout << "The sum is: "<<sum << endl;
	cout << "The Average is: " << avg << endl;
}