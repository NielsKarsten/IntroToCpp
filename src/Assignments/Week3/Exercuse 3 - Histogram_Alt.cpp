#include <iostream>
#include <math.h>
#include <string>
#include <set>

using namespace std;

int main()
{
    int l, n;
    cin >> l >> n;
    multiset<int> numbers;

    int x;
    while (cin >> x)
    {
        numbers.insert(x);
    }

    int LargestNum = *(numbers.rbegin());
    int interval_size = ceil(float(LargestNum) / float(l));
    int special_case = LargestNum % l != 0;

    for (size_t interval = 0; interval < LargestNum + special_case; interval += interval_size)
    {
        int count_in_interval = 0;

        for (size_t j = interval; j <= interval + interval_size - special_case; j++)
        {
            count_in_interval += numbers.count(j);
        }
        cout << interval << ": " << count_in_interval << endl;
    }
}