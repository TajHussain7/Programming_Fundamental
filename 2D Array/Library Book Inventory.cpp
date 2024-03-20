#include <iostream>

using namespace std;

int main() {
    cout << "\tLibrary Book Inventory" << endl;
    int size = 0;
    int* isbn = nullptr;
    char* name = nullptr;
    int choice = 0;
    char press = '\0';

    while (true) {
        cout << "1. Add a Book" << endl;
        cout << "2. Display Inventory" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            int* newIsbn = new int[size + 1];
            char* newName = new char[size + 1];

            for (int i = 0; i < size; i++) {
                newIsbn[i] = isbn[i];
                newName[i] = name[i];
            }

            cout << "Enter the ISBN of the book: ";
            cin >> newIsbn[size];
            cout << "Enter the title of the book: ";
            cin >> newName[size];

            delete[] isbn;
            delete[] name;
            isbn = newIsbn;
            name = newName;
            size++;
        }
        else if (choice == 2) {
            cout << "******** Inventory ********" << endl;
            for (int i = 0; i < size; i++) {
                cout << "ISBN: " << isbn[i] << ", Title: " << name[i] << endl;
            }
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice! Please try again." << endl;
        }

        cout << "Press any key to continue, or 'Q' to quit: ";
        cin >> press;
        if (press == 'Q' || press == 'q') {
            cout << "\n\t\t Thank You! " << endl;
            break;
        }
    }

    delete[] isbn;
    delete[] name;

    cout << endl;
    return 0;
}
