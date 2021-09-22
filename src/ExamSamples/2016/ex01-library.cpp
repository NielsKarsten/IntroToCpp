#include <iostream>
#include <vector>
#include "ex01-library.h"

using namespace std;

// Exercise 1 (a)
// Check and correct if necessary
//Displays a matrix of nxn elements
void display(double *A, unsigned int n){
    for (unsigned int i = 0; i < n; i++){
        for (unsigned int j = 0; j < n; j++){
            cout << A[i*n + j] << " ";
        }
        cout << endl;
    }

}

// Exercise 1 (b)
// Function to set all n elements of an array to value x
void reset(double *A, unsigned int n, double x){
    for (unsigned int i = 0; i < n; i++){
        A[i] = x;
    }
}

// Exercise 1 (c)
// This function takes an array of n x n elements and updates all elements to be the sum of their adjacent elements
void reduce(double * A, unsigned int n){
    for (unsigned int i = 0; i < n; i++){
        for (unsigned int j = 0; j < n; j++){
            A[i*n + j] = A[i*n + j] + A[i*n + (j+1)%n] + A[(i+1)%n*n + j];
        }
    }
    
}

// Exercise 1 (d)
// returns the sum of each row in a n x n matrix
vector<double> sumRows(double * A, unsigned int n){
    vector<double> sumRows(n);
    for (unsigned int i = 0; i < n; i++){
        for (unsigned int j = 0; j < n; j++){
            sumRows[i] += A[i*n + j];
        }
    }
    return sumRows;

}

// Exercise 1 (e)
// Implement this function
vector<double> sumCols(double * A, unsigned int n){

    
    // Put your code here
    
}

// Do not modify
void print(vector<double> & v){
    for(unsigned int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}