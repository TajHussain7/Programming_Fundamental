#include<iostream>
#include<string>

using namespace std;

string function(string line) {
	string reverse;
	for (int i = 0; line[i] != '\0'; i++) {
		reverse = line[i]+reverse;
	}
	return reverse;
}
int main() {
	string line;
	cout << "Enter your string: ";
	getline(cin,line);
	string reverse=(function(line));

	cout << "Originol String is: " << line << endl;
	cout << "Reverse string is: " << reverse << endl;

	cout << endl;
	system("pause");
	return 0;
}