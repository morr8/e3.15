/*
 •• E3.15
 Write a program that reads in two floating-point numbers and tests whether they are the same up to two decimal places. Here are two sample runs.
 
 Enter two floating-point numbers: 2.0 1.99998
 They are the same up to two decimal places.
 Enter two floating-point numbers: 2.0 1.98999
 They are different.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter two floating-point numbers: ";
    float first, second;
    cin >> first >> second;
    
    cout << abs(first - second) << endl;
    if (abs(first - second) <= 0.001)
    {
        cout << "They are the same up two decimal places.";
    }
    else
    {
        cout << "They are different";
    }
    cout << endl;
}
