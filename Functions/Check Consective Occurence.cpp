#include<iostream>

using namespace std;

void function1(char ch[]) {
	cout << "Input your sentence: ";
	cin.getline(ch, 40);
}
void function2(char ch[],char &found) {
	cout << "Input alphabet whose consective occurence you want to search: ";
	cin >> found;
	bool check = false;
	for (int i = 0; ch[i] != '\0'; i++) {
		if (found == ch[i] && found == ch[i + 1]) {
			check = true;
		}
	}
	if (check == true) {
		cout << "Yes, consective occurence found. " << endl;
	}
	else {
		cout << "No, consective occurence found. " << endl;
	}
}
int main() {
	char ch[40] = { '\0' };
	char found = '\0';
	function1(ch);
	function2(ch,found);




	cout << endl;
	system("pause");
	return 0;
}