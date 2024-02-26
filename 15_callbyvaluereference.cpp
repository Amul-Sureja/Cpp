#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// int swap(int a, int b)     <== does not work
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int swappointer(int *a, int *b)     // <== this is use
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int swapreference(int &a, int &b)     // <== this is use
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int & swapreference(int &a, int &b)     // <== this is use
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int num1, num2, a, b;
    cout<<"enter the number : "<<endl;
    cin>>num1;
    cout<<"enter the number : "<<endl;
    cin>>num2;
    cout<<"enter the a : "<<endl;
    cin>>a;
    cout<<"enter the b : "<<endl;
    cin>>b;
    cout<<"the sum is : "<<sum(num1, num2)<<endl;
    cout<<"the value of a is : "<<a<<endl<<"the value of b is :"<<b<<endl;
    // swap(a, b);
    // swappointer(a, b);
    // swapreference(a, b);
    swapreference(a, b) = 45;
    cout<<"the value of a is : "<<a<<endl<<"the value of b is :"<<b<<endl;
    return 0;
}