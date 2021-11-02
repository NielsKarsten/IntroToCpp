#include <iostream>

using namespace std;

// Function: LevensteinDistance
int d(string a, string b)
{
    if (a.length() == 0)
    {
        return b.length();
    }
    else if (b.length() == 0)
    {
        return a.length();
    }
    else{
        int du = d(a.substr(1), b) + 1; 
        int dv = d(a, b.substr(1)) + 1;
        int dw = d(a.substr(1), b.substr(1)) + (a[0] == b[0] ? 0 : 1);
        
        return min(min(du, dv), dw);
    }
    
}

int main(){
    string a, b;
    std::cin >> a >> b;
    std::cout << d(a, b);
}