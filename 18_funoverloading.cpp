#include <iostream>
using namespace std;

int add(float a, int b)
{
    cout<<"using function with 2 argument"<<endl;
    return a + b;
}

int add(int a, int b, int c)
{
    cout<<"using function with 3 argument"<<endl;
    return a + b + c;
}

int main()
{
    cout<<"the sum of 2, 4 is : "<<add(2,4)<<endl;
    cout<<"the sum of 2, 4 and 5 is : "<<add(2,4,5)<<endl;
    return 0;
}