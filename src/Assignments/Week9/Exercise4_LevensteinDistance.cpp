#include <iostream>

// Function: LevensteinDistance
int d(char a, char b)
{
    if (a == b)
        return 0;
    else
        return 1;
}

int main(){
    char a, b;
    std::cin >> a >> b;
    std::cout << d(a, b);
}