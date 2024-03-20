#include <iostream>
#include <fstream>
using namespace std;

void readAndStoreData(int *dataArr, int &dataSize) {
    ifstream dataFile("file.txt");
    char userDecision;
    int dataIndex = 0, dataValue;

    do {
        cout << "Press 'Y' to read data from the file and 'N' to terminate reading." << endl;
        cin >> userDecision;

        if (userDecision == 'Y' || userDecision == 'y') {
            if (dataFile >> dataValue) {
                if (dataIndex >= dataSize) {
                    int newDataSize = dataSize * 2;
                    int *newDataArr = new int[newDataSize];

                    for (int i = 0; i < dataSize; ++i) {
                        newDataArr[i] = dataArr[i];
                    }

                    delete[] dataArr;
                    dataArr = newDataArr;
                    dataSize = newDataSize;
                }

                dataArr[dataIndex++] = dataValue;
                cout << dataSize << " Data Read Successfully" << endl;
                cout << "Displaying Array:" << endl;
                for (int i = 0; i < dataIndex; ++i) {
                    cout << dataArr[i] << " ";
                }
                cout << endl;
            } else {
                cout << "Invalid Input" << endl;
                break;
            }
        }
    } while (userDecision != 'N' && userDecision != 'n');

    dataFile.close();
}

int main() {
    int dataSize = 4;
    int *dataArr = new int[dataSize];

    readAndStoreData(dataArr, dataSize);

    cout << "Reading Terminated." << endl;
    cout << "Final Array: ";
    for (int i = 0; i < dataSize; ++i) {
        cout << dataArr[i] << " ";
    }
    cout << endl;

    delete[] dataArr;
   
    return 0;
}

