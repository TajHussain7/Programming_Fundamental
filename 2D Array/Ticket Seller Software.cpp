#include<iostream>

using namespace std;

int main() {
    cout << "\t\t" << " Ticket Seller Software " << "\t\t" << endl;
    int choice = 0;
    int size = 0;
    int* arrayID = new int[size];
    int* arraynumber = new int[size];
    int ID = 0;
    int number = 0;
    char press = '\0';

    while (true) {
        cout << " 1. " << "\t " << " Sell Ticket (Add ID and ticket number)" << endl;
        cout << " 2. " << "\t " << " Delete ticket by student ID" << endl;
        cin >> choice;

        if (choice == 1) {
            int* newArrayID = new int[size + 1];
            int* newArraynumber = new int[size + 1];

            for (int i = 0; i < size; i++) {
                newArrayID[i] = arrayID[i];
                newArraynumber[i] = arraynumber[i];
            }

            // Add new entry
            cout << "Enter the ID: ";
            cin >> ID;
            newArrayID[size] = ID;
            cout << "Enter ticket Number: ";
            cin >> number;
            newArraynumber[size] = number;

            // Display all entries
            cout << "Sr No. " << "\t\t" << " Student ID " << "\t\t" << "Ticket Number " << endl;
            for (int i = 0; i < size + 1; i++) {
                cout << i + 1 << "\t\t " << newArrayID[i] << "\t\t  " << newArraynumber[i] << endl;
            }

            // Clean up old arrays and update pointers
            delete[] arrayID;
            delete[] arraynumber;
            arrayID = newArrayID;
            arraynumber = newArraynumber;
            size++;
        }
        else if (choice == 2) {
            cout << "Enter the student ID you want to delete: ";
            cin >> ID;

            // Find and delete entry
            int index = 0;
            for (int i = 0; i < size; i++) {
                if (arrayID[i] == ID) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                for (int i = index; i < size - 1; i++) {
                    arrayID[i] = arrayID[i + 1];
                    arraynumber[i] = arraynumber[i + 1];
                }
                cout << "Data deleted successfully." << endl;
                cout << "Sr No. " << "\t\t" << " Student ID " << "\t\t" << "Ticket Number " << endl;
                for (int i = 0; i < size - 1; i++) {
                    cout << i + 1 << "\t\t " << arrayID[i] << "\t\t  " << arraynumber[i] << endl;
                }
                size--;
            }
            else {
                cout << "ID not found." << endl;
            }
        }

        cout << "Press any key to continue, or 'q' to quit: ";
        cin >> press;
        if (press == 'q' || press == 'Q') {
            break; // Exit loop if 'q' is pressed
        }
    }

    // Clean up dynamic memory
    delete[] arrayID;
    delete[] arraynumber;

    cout << endl;
    return 0;
}
