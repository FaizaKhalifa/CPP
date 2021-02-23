//wap to print the greatest of 3 numbers.
#include <iostream>

using namespace std;

int main()
{
    int n1 = 3;
    int n2 = 5;
    int n3 = 27;

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "n1 is greater" << endl;
        }
        else
        {
            cout << "n3 is greater" << endl;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << "n2 is greater" << endl;
        }
        else
        {
            cout << "n3 is greater" << endl;
        }
    }
    return 0;
}
