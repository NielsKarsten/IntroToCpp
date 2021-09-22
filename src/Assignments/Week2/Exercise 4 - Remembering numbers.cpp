// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Define array with 1000 elements
    int SeenCounter[1000];
    int n = 1;

    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            cout << SeenCounter[n] << endl;
            SeenCounter[n] += 1;
        }
    }
}