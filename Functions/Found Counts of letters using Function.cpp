#include<iostream>

using namespace std;
void function1(char ch[]) {
	cout << "Input a sentence: ";
	cin.getline(ch, 40);
}
void function2(char ch[], int &count) {
	for (int i = 0; ch[i] != '\0'; i++) {

		if ((ch[i] >= 'a' && ch[i] <= 'z' || ch[i]>='A' && ch[i]<='Z') && (ch[i + 1] >= 'a' && ch[i + 1] <= 'z' || ch[i+1]>='A' && ch[i+1]<='Z')
			&& (ch[i + 2] >= 'a' && ch[i + 2] <= 'z' || ch[i+2]>='A' && ch[i+2]<='Z') && (ch[i + 3] == ' ' || ch[i + 3] == '\0')) {
			count++;
		}
	}
}
void function3(int count) {
	if (count>0) {
		cout << "Total of " << count << " three letter words found. " << endl;
	}
	if(count=0){
		cout << "Sorry No three letter words found. " << endl;
	}
}
int main() {
	char ch[40];
	int count = 0;
	function1(ch);
	function2(ch,count);
	function3(count);


	cout << endl;
	system("pause");
	return 0;
}