/*
 * C++ program to compute factorial of a given integer
 */
 
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
 
    int factorial = 1;
    int i = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
 
    cout << "The factorial of " << n << " is " << factorial << endl;
    return 0;
}