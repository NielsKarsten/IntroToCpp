#include <iostream>
#include <string>

using namespace std;

//Program to check if n values are sorted or not
int main(){
    int n;
    cin >> n;
    bool sorted = true;

    int prevNum = 0, currNum = 0;
    while (cin >> currNum && sorted)
    {
        (prevNum <= currNum) ? prevNum = currNum : sorted = false;
    }

    cout << ((sorted) ? "SORTED" : "UNSORTED") << endl;
    return 0; 
}