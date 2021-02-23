//wap to make class of person

#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    int weight;

public:
    void displayInfo()
    {
        cout << "age of person" << age << endl;
        cout << "weight of person" << weight << endl;
    }
};
int main()
{
    Person faiza;
    faiza.age = 20;
    faiza.weight = 59;
    faiza.displayInfo();
    return 0;
}