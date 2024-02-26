#include <iostream>
using namespace std;

int x; // Global x
int main()
{
    // Arithmetic Operators
    int a = 4, b = 5;
    cout << "the value of a+b is" << a + b << endl;
    cout << "the value of a-b is" << a - b << endl;
    cout << "the value of a/b is" << a / b << endl;
    cout << "the value of a*b is" << a * b << endl;
    cout << "the value of a%b is" << a % b << endl;
    cout << "the value of a++ is" << a++ << endl;
    cout << "the value of b++ is" << b++ << endl;
    cout << "the value of ++a is" << ++a << endl;
    cout << "the value of ++b is" << ++b << endl;

    // relational operators
    int a = 6, b = 4;
    cout << "a == b is " << (a == b) << endl;
    cout << "a > b is " << (a > b) << endl;
    cout << "a >= b is " << (a >= b) << endl;
    cout << "a < b is " << (a < b) << endl;
    cout << "a <= b is " << (a <= b) << endl;
    cout << "a != b is " << (a != b) << endl;

    // Logical Operators
    int a = 6, b = 4;
    cout << "a && b is " << (a && b) << endl;
    cout << "a ! b is " << (a > b) << endl;
    cout << "!b is " << (!b) << endl;

    // Bitwise Operators
    int a = 6, b = 4;
    cout << "a & b is " << (a & b) << endl;
    cout << "a | b is " << (a | b) << endl;
    cout << "a ^ b is " << (a ^ b) << endl;
    cout << "a<<1 is " << (a << 1) << endl;
    cout << "a>>1 is " << (a >> 1) << endl;
    cout << "~(a) is " << ~(a) << endl;

    // Assignment Operators
    int a = 6, b = 4;
    cout << "a = " << a << endl;
    cout << "a += b is " << (a += b) << endl;
    cout << "a -= b is " << (a -= b) << endl;
    cout << "a *= b is " << (a *= b) << endl;
    cout << "a /= b is " << (a /= b) << endl;

    // Ternary or Conditional Operators
    int a = 3, b = 4;
    int result = (a < b) ? b : a;
    cout << "The greatest number is " << result << endl;

    // sizeof()
    sizeof(char); // returns 1

    // comma operators
    int a = 6;
    int b = (a + 1, a - 2, a + 5); // b = 11

    // -> operators
    // cout << emp->first_name;

    // cast operators
    float a = 11.567;
    int c = (int)a; // returns 11

    // dot operators
    cout << emp.first_name;

    // & and * operators
    int a = 6;
    int *b;
    int c;
    b = &a;
    c = *b;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;

    // << and >> operators
    int a;
    cin >> a;
    cout << a;

    // scope resolution operator is ::
    int x = 10; // Local x
    cout << "Value of global x is " << ::x;
    cout << "\nValue of local x is " << x;
    return 0;
}