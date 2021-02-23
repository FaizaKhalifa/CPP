//wap 1st 10 fibbonaci series.

#include <iostream>

using namespace std;
int main()
{
    int i = 1;
    int n1 = 0;
    int n2 = 1;
    int nextterm;

    while (i <= 10)
    {
        cout << n1 << endl;
        nextterm = n1 + n2;
        //cout << nextterm << endl;
        n1 = n2;
        n2 = nextterm;
        i++;
    }

    return 0;
}
