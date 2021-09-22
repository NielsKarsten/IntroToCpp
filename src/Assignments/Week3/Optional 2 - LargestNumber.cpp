#include <iostream>
#include <string>

using namespace std;

//Program that looks through n numbers and highlights the first occourance of the largest number 
int main()
{
    int n, largest = 0;
    cin >> n;
    int *numbers = new int[n];
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
        if (numbers[i] > largest)
            largest = numbers[i];
    }

    //Print the string of numbers with the largest number highlighted
    bool hasBeenHighlighted = false;
    for (int i = 0; i < n; i++){
        if (numbers[i] == largest and !hasBeenHighlighted){
            cout << " *" << largest << "* ";
            hasBeenHighlighted = true;
        } else{
            cout << " " << numbers[i] << " ";
        }

    }
    delete [] numbers;
    return 0;
}
