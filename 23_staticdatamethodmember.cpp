#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id; // <= throws an error
        cout << "the value of count is " << count << endl;
    }
};
// count is static data member of class employee
int Employee ::count = 1000; // defult value is 0
int main()
{
    Employee amul, krish, man;
    // amul.id = 1;   // can not define because the private member
    // amul.count = 1; // can not define because the private member
    amul.setData();
    amul.getData();
    Employee::getCount();

    krish.setData();
    krish.getData();
    Employee::getCount();

    man.setData();
    man.getData();
    Employee::getCount();
    return 0;
}
