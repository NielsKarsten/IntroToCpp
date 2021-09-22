#include <iostream>
#include <string>

using namespace std;

int main() {
    string userCommand;
    int number;
    int *bag = new int[1000]();

    while (userCommand != "quit") {
        cin >> userCommand >> number;
        if (userCommand == "quit") {
            break;
        } else if (userCommand == "add") {
            bag[number]++;
        } else if (userCommand == "del") {
            bag[number]--;
        } else if (userCommand == "qry") {
            (bag[number] == 0) ?  cout << "F" : cout << "T"
        }
    }
    delete [] bag;
    return 0;
}