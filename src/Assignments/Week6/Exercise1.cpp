#include <iostream>
#include <string>

using namespace std;

class fraction{
    private:
        int numerator;
        int denominator;

        int FindGCD(int a, int b){
            if (b == 0)
                return a;
            else
                return FindGCD(b, a % b);
        }
        void reduce(){
            int gcd = FindGCD(numerator, denominator);
            numerator /= gcd;
            denominator /= gcd;
        }

    public:
        fraction(int n, int d){
            numerator = n;
            denominator = d;
        };
        
        //Function to add 2 fractions together
        void add(fraction f){
            int gcd = FindGCD(denominator, f.denominator);
            int newNumerator = (numerator * (f.denominator / gcd)) + (f.numerator * (denominator / gcd));
            int newDenominator = denominator * (f.denominator / gcd);
            numerator = newNumerator;
            denominator = newDenominator;
        };

        //Function to multiply 2 fractions together
        void mult(fraction f){
            int newNumerator = numerator * f.numerator;
            int newDenominator = denominator * f.denominator;
            numerator = newNumerator;
            denominator = newDenominator;
            reduce();
        };

        //Function to divide 2 fractions
        void div(fraction f){
            if (f.numerator == numerator && f.denominator == denominator){
                numerator = 1;
                denominator = 1;
            }
            else{
                int newNumerator = numerator * f.denominator;
                int newDenominator = denominator * f.numerator;
                numerator = newNumerator;
                denominator = newDenominator;
                reduce();
            }
        };

        //function to print the fraction
        void display(void){
            cout << numerator << " / " << denominator << endl;
        };
};

//Read input in the form of fraction operator fraction
int main(){
    int n1 = 0, d1 = 0, n2 = 0, d2 = 0;
    string fr1 = "/", opr = "", fr2 = "/";
    while (cin >> n1 >> fr1 >> d1 >> opr >> n2 >> fr2 >> d2){
        fraction f1(n1, d1);
        fraction f2(n2, d2);
        if (opr == "+")
            f1.add(f2);
        else if (opr == "*")
            f1.mult(f2);
        else if (opr == "div")
            f1.div(f2);

        f1.display();    

    }
    return 0;
}