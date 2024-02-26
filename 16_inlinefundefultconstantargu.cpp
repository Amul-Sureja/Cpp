#include <iostream>
using namespace std;

inline int sum(int a,int b)  // in defult argument b = 3
                             // in constant argument int (const int a = 9, b )
{   
    static int c = 0;   // this exicute is one time
    c++;
    return a+b*c;
}

int main()
{
    int a, b;
    cout << "enter the value of a and b : " << endl;
    cin >> a >> b;
    cout << "the sum of " << a << "," << b << " is " << sum(a, b) << endl;
    return 0;
}

// when use recursion then not use inline function
