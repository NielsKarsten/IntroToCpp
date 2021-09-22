#include <iostream>
#include <string>

using namespace std;

//Program finds the dot product of 2 vectors of n length
int main()
{
    int n;
    cin >> n;
    double *VectorA = new double[n], *VectorB = new double[n];
    for (int i = 0; i < n; i++)
    {
        cin >> VectorA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> VectorB[i];
    }
    double dotProduct = 0.0;
    for (int i = 0; i < n; i++)
    {
        dotProduct += VectorA[i] * VectorB[i];
    }
    cout << dotProduct << endl;

    delete[] VectorA;
    delete[] VectorB;
    return 0;
}