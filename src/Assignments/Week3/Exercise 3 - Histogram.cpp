#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Sort a stream of n numbers into a histogram with l intervals.
int main()
{
    int l = 0, n = 0, largestNum = 0;
    cin >> l >> n;

    //Get the numbers
    int *numbers = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        (numbers[i] > largestNum) ? largestNum = numbers[i] : 0;
    }

    //Calculate interval size
    int intervalSize = ceil((double)largestNum / (double)l);

    //Initialize the histogram with 0 values and sorting numbers into the correct interval
    int *histogram = new int[l]();
    for (int i = 0; i < n; i++)
    {
        int index = numbers[i] / intervalSize;
        (index <= l-1) ? histogram[index]++ : histogram[l-1]++;
    }
    
    //Print the histogram
    for (int i = 0; i < l; i++)
    {
        cout << i * intervalSize << ": " << histogram[i] << endl;
    }

    delete [] numbers;
    delete [] histogram;

    return 0;
}
