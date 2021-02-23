//wap
#include <iostream>

using namespace std;

class Account
{
public:
    int accNo;
    double balance;

public:
    void displayInfo()
    {
        cout << "Account Number" << accNo << endl;
        cout << "Account balance" << balance << endl;
    }
};

int main()
{
    Account faiza;
    faiza.accNo = 101;
    faiza.balance = 100001.01;
    faiza.displayInfo();

    Account izzy;
    izzy.accNo = 101;
    izzy.balance = 100001.01;
    izzy.displayInfo();

    return 0;
}
