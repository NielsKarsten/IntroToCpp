#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 < num2)
    {
        cout << num1 << " is smaller than " << num2;
    }
    else if (num2 < num1)
    {
        cout << num1 << " is bigger than " << num2;
    }
    else
    {
        cout << num1 << " is equal to " << num2;
    }

    return 0;
}