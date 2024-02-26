// #include <strstream>
#include <iostream>  //<==this is a importent
using namespace std;

int main()
{
    // int x;
    // cout << "Type a number: ";       // Type a number and press enter
    // cin >> x;                        // Get user input from the keyboard
    // cout << "Your number is: " << x; // Display the input value

    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;

    return 0;
}