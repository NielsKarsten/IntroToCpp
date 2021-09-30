#include <iostream>
#include <string>

using namespace std;

class fraction{
    private:
        int numerator;
        int denominator;
    public:
        fraction(int n, int d){
            numerator = n;
            denominator = d;
        };

        void add(fraction f){
            int newNumerator = numerator * f.denominator + denominator * f.numerator;
            int newDenominator = denominator * f.denominator;
            numerator = newNumerator;
            denominator = newDenominator;
        };        
        void mult(fraction f){
            int newNumerator = numerator * f.numerator;
            int newDenominator = denominator * f.denominator;
            numerator = newNumerator;
            denominator = newDenominator;
        };
        void div(fraction f){
            int newNumerator = numerator * f.denominator;
            int newDenominator = denominator * f.numerator;
            numerator = newNumerator;
            denominator = newDenominator;
        };

        void display(void){
            cout << numerator << "/" << denominator << endl;
        };


};

//Read input in the form of fraction operator fraction
int main(){
    string input = "";
    string currFrac = "";
    int n1 = 0, m1 = 0, n2 = 0, m2 = 0;
    string Operator = "";

    while (cin >> input){
        if (input == "+" || input == "-" || input == "*"){
            Operator = input;
        }
        

    }
    return 0;
}