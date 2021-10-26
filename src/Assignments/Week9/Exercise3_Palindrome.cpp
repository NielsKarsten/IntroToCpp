#include <iostream>
#include <list>

using namespace std;

bool isPalindrome(list<int> &s, int start, int end)
{
    if (start != end) {
        return false;
    }
    else if (start == end && s.size() <= 1) {
        return true;
    }
    else {
        int first = s.front();
        int last = s.back();
        s.pop_front();
        s.pop_back();
        return isPalindrome(s, first, last);
    }
}

int main()
{
    list<int> s;
    int n;
    while (cin >> n)
        s.push_back(n);
    string result = "yes";
    if(s.size() == 1){

    }
    else if(s.size() == 0)
        result = "no";
    else{
        int first = s.front();
        int last = s.back();
        s.pop_front();
        s.pop_back();
        if(!isPalindrome(s, first, last))
            result = "no";
    }
    cout << result << endl;
}