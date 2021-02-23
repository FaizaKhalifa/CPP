//Wap t accept 2 numbers from the user and find the greater.
#include <iostream>

using namespace std;
int main()
{
    int n1;
    int n2;

    cout << "enter n1:";
    cin >> n1;
    cout << "enter n2:";
    cin >> n2;

    if (n1 > n2)
    {
        cout << "n1 is greater" << n1 << endl;
    }
    else
    {
        cout << "n2 is greater" << n2 << endl;
    }
    return 0;
}