#include <iostream>
#include <string>

using namespace std;

int main()
{
    double n, sum = 0;
    cin >> n;
    if (0 < n)
    {
        for (int i = 0; i < n; i++)
        {
            double tmp;
            cin >> tmp;
            sum += tmp;
        }
    }
    cout << sum;
    return 0;
}