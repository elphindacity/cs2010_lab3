/******************************************************************************
Program #3
Write a C++ program that :

defines a type alias called VEC that is an alias for a pointer to an int.
defines a type alias called MATRIX that is an alias for a pointer to a VEC
includes the following variable definitions :
int a = 5;
VEC v = ***;            // replace the stars with an expression  that has v pointing to a
MATRIX m = ***;   // replace the stars with an expression  that has m pointing to v
display the value of a by using v and m.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    typedef int *VEC;
    typedef VEC *MATRIX;
    int a = 5;
    VEC v = &a;
    MATRIX m = &v;
    
    cout << "The value of 'a' according to *v is : " << *v;
    cout << "\nThe value of 'a' according to **m is : " << **m;

    return 0;
}