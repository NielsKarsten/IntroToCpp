#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;

//Calculate dot products of vectors in map
double dotProduct(vector<int> vector1, vector<int> vector2)
{
    double dotProduct = 0;
    for (int i = 0; i < vector1.size(); i++)
    {
        dotProduct += vector1[i] * vector2[i];
    }
    return dotProduct;
}
//lengthen vector with n zeros
void lengthen(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        v.push_back(0);
    }
}

int main()
{
    vector<int> SetA;
    vector<int> SetB;
    char letter;
    int number;
    while (cin >> letter >> number)
    {
        switch (letter)
        {
        case 'a':
            SetA.push_back(number);
            break;
        case 'b':
            SetB.push_back(number);
            break;
        }
    }

    if (SetA.size() != SetB.size())
    {
        (SetA.size() > SetB.size() ? lengthen(SetB, SetA.size() - SetB.size()) : lengthen(SetA, SetB.size() - SetA.size());
    }

    cout << dotProduct(SetA, SetB) << endl;
    return 0;
}