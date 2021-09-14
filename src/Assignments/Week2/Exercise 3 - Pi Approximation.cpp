#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    //Compute an approximation of pi using Leibniz' formula from n
    double pi = 0;
    for (int i = 0; i < n; i++)
    {
        pi += pow(-1, i) / (2 * i + 1);
    }
    pi *= 4;

    cout << pi;
    return 0;
}