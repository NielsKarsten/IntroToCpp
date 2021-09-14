#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Sort a stream of n numbers into a histogram with l intervals. Each interval is 10 values 
int main()
{
    int l = 0;
    cin >> l;

    int n = 0;
    cin >> n;

    //Get the numbers
    int numbers[n];
    int largestNum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        (numbers[i] > largestNum) ? largestNum = numbers[i] : 0;
    }

    //Calculate interval size
    int intervalSize = ceil((double)largestNum / (double)l);

    //Initialize the histogram with 0 values
    int histogram[l];
    for (int i = 0; i < l; i++)
    {
        histogram[i] = 0;
    } 

    //sort the numbers into the histogram
    for (int i = 0; i < n; i++)
    {
        int index = numbers[i] / intervalSize;
        (index <= l-1) ? histogram[index]++ : histogram[l-1];
    }
    
    //Print the histogram
    for (int i = 0; i < l; i++)
    {
        cout << i * intervalSize << ": " << histogram[i] << endl;
    }
    return 0;
}
