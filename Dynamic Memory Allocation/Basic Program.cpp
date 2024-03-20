#include<iostream>

using namespace std;

int main() {
	int* p = new int;
	double* r = new double;
	*p = 25;
	*r = 25.79;
	cout << *p<< " " << *r << endl;
	cout << p << " " << r << endl;



	delete p;
	delete r;
	p = nullptr;
	r = nullptr;


	cout << endl;
	system("pause");
	return 0;
}