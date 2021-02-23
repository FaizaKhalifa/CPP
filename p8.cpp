//WAP to accept number from user and finds its square using function.

#include <iostream>

using namespace std;

int square;
int number;
int findsquare(int n);

int main()
{
    cout << "enter the number: " << endl;
    cin >> number;

    square = findsquare(number);

    cout << "square of given number" << square << endl;

    return 0;
}
int findsquare(int n)
{
    return n * n;
}