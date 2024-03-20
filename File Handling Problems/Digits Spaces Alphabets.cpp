#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream infile;
    infile.open("Animal.txt");
    char ch;
    int ch1 = 0;
    int spaces = 0, digit = 0;
    while (infile) {
        infile.get(ch);
        ch1++;
        if (ch == ' ') {
            spaces++;
        }
        if (ch > 47 && ch < 57) {
            digit++;
        }
    }
    cout << "Total alphabets are: " << ch1 << endl;
    cout << "Total digits are: " << digit << endl;
    cout << "Total spaces are: " << spaces << endl;







    system("pause");
    return 0;
}
