#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include<map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, vector<int>> map;
    char letter;
    int number;
    while (cin >> letter >> number)
    {
        if (map.find(letter) == map.end()){
            vector<int> v;
            v.push_back(number);
            map.insert(pair<char, vector<int>>(letter, v));
        }else{
            map[letter].push_back(number);
        }
    }

    for (auto it = map.begin(); it != map.end(); ++it)
    {
        //sort vector of numbers
        sort(it->second.begin(), it->second.end());

        for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it2)
        {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}