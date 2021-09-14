// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string result = "";
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            result += to_string(i) + " * ";
            n /= i;
        }
    }
    result = result.substr(0, result.size() - 3);
    cout << result;
    return 0;
}