/******************************************************************************

Write a C++ program that :

creates two variables, x and y, of type double; 
reads values into x and y
creates two pointer variables that point to x and y, respectively; 
adds the values of x and y using the pointer variables
displays x, y and the sum.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    cout << "Enter a value for X : ";
    cin >> x;
    cout << "\nEnter a value for Y : ";
    cin >> y;
    double *px = &x;
    double *py = &y;
    double sum = *px + *py;
    cout << "\nX   = " << *px;
    cout << "\nY   = " << *py;
    cout << "\nX+Y = " << sum;
    return 0;
}