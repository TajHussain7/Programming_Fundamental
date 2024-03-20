#include<iostream>

using namespace std;

void function1(char ch[]) {
	cout << "Input your sentence: ";
	cin.getline(ch, 60);
}
void function2(char ch[] , char &found) {
	cout << "Input alphabet to search: ";
	cin >> found;
	cout << "Words start with " << found << " : " << endl;
	for (int i = 0; ch[i] != '\0'; i++) {
		if ((ch[0 + i]==found) && ch[0 + i] >= 'a' && ch[0 + i] <= 'z' || (ch[0 + i] >= 'A' && ch[0 + i] <= 'Z') && ch[i]==' ') {
			cout << ch[0+i];
		}
	}
}
int main() {
	char ch[60];
	char found = '\0';
	function1(ch);
	function2(ch, found);


	cout << endl;
	system("pause");
	return 0;
}