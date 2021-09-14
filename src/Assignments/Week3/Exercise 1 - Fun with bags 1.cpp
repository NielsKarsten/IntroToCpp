#include <iostream>
#include <string>

using namespace std;

int main() {
    string userCommand;
    int number;
    int *bag = new int[1000];

    //initialize bag Array with 0s
    for (int i = 0; i < 1000; i++) {
        bag[i] = 0;
    }

    while (userCommand != "quit") {
        cin >>userCommand >> number;
        if (userCommand == "quit") {
            break;
        } else if (userCommand == "add") {
            bag[number] = 1;
        } else if (userCommand == "del") {
            bag[number] = 0;
        } else if (userCommand == "qry") {
            if (bag[number] == 0)
            {
                cout << "F";
            }
            else
            {
                cout << "T";
            }
        }
    }
    delete [] bag;
    return 0;
}