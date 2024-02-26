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
};
// static data member
int Employee ::count = 1000; // defult value is 0
int main()
{
    Employee amul;
    // amul.id = 1;   // can not define because the private member
    // amul.count = 1; // can not define because the private member
    amul.setData();
    amul.getData();
    return 0;
}




// 24--12:39