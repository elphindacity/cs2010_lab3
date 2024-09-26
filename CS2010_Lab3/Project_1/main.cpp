/* 
Write a C++ program that will prompt the user for a positive integer(<=100) 
representing a purchase in pennies and will display the change, from a dollar, 
in quarters, dimes, nickels and pennies. Your program can assume that the user 
will enter a positive integer <= 100.  Write the program as 2 cpp files : 
one will hold variables that will be assigned the values of the different coins; 
the other will access these values via EXTERN statements. 
Make sure that your code is commented and that its layout is clean.
*/

#include <stdio.h>
#include <iostream>
// #include "coin_values"
using namespace std;
extern int quarter;
extern int dime;
extern int nickel;
extern int penny;

int main()
{
    cout << "You have one dollar and purchase something...\n";
    cout << "Please enter a positive integer less than or equal to 100 : ";
    int x;
    cin >> x;
    int y = 100 - x;
    cout << "\nYou receive " << y << " in change.\n";
    int q = y/quarter;
    y = y%quarter;
    cout << q << " quarters, ";
    int d = y/dime;
    y = y%dime;
    cout << d << " dimes, ";
    int n = y/nickel;
    y = y%nickel;
    cout << n << " nickels, ";
    int p = y/penny;
    y = y%penny;
    cout << "and " << p << " pennies.";
    return 0;
}