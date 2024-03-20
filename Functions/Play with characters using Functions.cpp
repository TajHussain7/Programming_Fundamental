#include<iostream>

using namespace std;
void function1(char ch[]) {
	cout << "Enter your sentence: ";
	cin.getline(ch,60);
}
void function2(char ch[], int &count, char &found) {
	cout << "Enter your alphabet which you found: ";
	cin >> found;
	for (int i = 0; ch[i] != '\0'; i++) {
		if (found == ch[i]) {
			count++;
		}
	}
}
void function3(int count, char found) {
	cout << "This alphabet " << found << " is occured in  " << count << "  times. " << endl;
}
int main() {
	char ch[60] = { '\0' };
	int count = 0;
	char found = '\0';
	function1(ch);
	function2(ch,count,found);
	function3(count,found);







	cout << endl;
	system("pause");
	return 0;
}