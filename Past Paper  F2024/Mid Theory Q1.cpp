#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream infile;
    infile.open("file.txt");

    if (!infile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    char ch;
    cout << "Enter your character: ";
    cin >> ch;

    const int size = 300;
    char arr[size];
    int word = 0;
    while (infile >> arr) {
        if (arr[0] == ch) {
            cout << arr << " ";
        }
    }

    cout << endl;
    system("pause");
    return 0;
}
