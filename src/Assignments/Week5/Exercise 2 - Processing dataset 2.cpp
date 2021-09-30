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

    //Find biggest vector in map
    int max = 0;
    for (auto it = map.begin(); it != map.end(); it++){
        if (it->second.size() > max){
            max = it->second.size();
        }
    }

    for (int i = 0; i < max; i++)
    {
        for (auto it = map.begin(); it != map.end(); ++it)
        {
            if (i <= it->second.size()-1){
                cout << it->second[i] << " ";
            }
        }
    }

    return 0;
}