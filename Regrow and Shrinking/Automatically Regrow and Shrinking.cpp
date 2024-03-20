#include <iostream>
using namespace std;

int* regrow(int *old_arr, int &size) {
    int *new_arr = new int[size + 1];
    for (int i = 0; i < size; i++) {
        new_arr[i] = old_arr[i];
    }
    delete[] old_arr;
    size++;
    return new_arr;
}

int* shrink(int *old_arr, int j, int &size) {
    if (size <= 0) {
        cout << "No enough space" << endl;
        return old_arr;
    }

    int *new_arr = new int[size - 1];
    for (int i = 0; i < j; i++) {
        new_arr[i] = old_arr[i];
    }
    for (int i = j; i < size - 1; i++) {
        new_arr[i] = old_arr[i + 1];
    }
    delete[] old_arr;
    size--;
    return new_arr;
}

int main() {
    int size = 3;
    int *p = new int[size];

    int i = 0;
    do {
        cout << "Enter insert :";
        cin >> p[i];
        if (p[i] == -1) {
        break; 
    	}
        i++;
        if (i == size) {
            p = regrow(p, size);
        }
    } while (p[i - 1] != -1);
	p = shrink(p, i, size);
    cout << "After Regrow: ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    int j = 0;
    do {
        if (size == 0) {
            cout << "No enough space" << endl;
            break;
        }

        cout << "Enter delete index: ";
        cin >> j;

        if (j < 0 || j >= size) {
            cout << "Invalid index" << endl;
            continue;
        }

        p = shrink(p, j, size);

        cout << "After Shrink: ";
        for (int i = 0; i < size; i++) {
            cout << p[i] << " ";
        }
        cout << endl;

    } while (j != 1);

    delete[] p;

    return 0;
}

