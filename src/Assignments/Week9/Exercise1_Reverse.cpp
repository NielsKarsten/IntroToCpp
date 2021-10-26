#include <iostream>
#include <set>

using namespace std;

void reverseOrder(int n) {
    int num;
    if (cin >> num) {
        reverseOrder(num);
    }
    cout << n << " ";
}

int main()
{
    int number;
    if (cin >> number){
        reverseOrder(number);
    }
}