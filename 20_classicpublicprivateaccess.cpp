#include <iostream>
using namespace std;

class employee
{
    private:
        int a, b, c;

    public:
        int d, e;
        void setData(int a1,int b1,int c1);  //declaration
        void getData(){
            cout<<"the value of a is : "<<a<<endl;
            cout<<"the value of a is : "<<b<<endl;
            cout<<"the value of a is : "<<c<<endl;
            cout<<"the value of a is : "<<d<<endl;
            cout<<"the value of a is : "<<e<<endl;
        }
};

void employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee amul;
    // amul.a = 134;        // error because the a is private
    amul.d = 34;
    amul.e = 89;
    amul.setData(1,2,4);
    amul.getData();
    return 0;
}