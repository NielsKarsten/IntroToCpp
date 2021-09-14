#include <iostream>
#include <string>

using namespace std;

int main() {
    string userCommand;
    int number;
    int bag[1000];

    //initialize bag Array with 0s
    for (int i = 0; i < 1000; i++) {
        bag[i] = 0;
    }

    while (userCommand != "quit") {
        cin >>userCommand >> number;
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
    return 0;
}