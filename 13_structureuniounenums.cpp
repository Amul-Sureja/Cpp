// #include <iostream>
// using namespace std;

// typedef struct emloyee
// {
//     int id;
//     float salary;
//     char favchar;
// } ep;
// int main()
// {
//     // struct emloyee amul;
//     ep amul;
//     amul.id = 1;
//     amul.salary = 20000;
//     amul.favchar = 's';
//     cout<<amul.salary<<endl;
//     cout<<amul.id<<endl;
//     cout<<amul.favchar<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// union money
// {
//     int rice;
//     float pound;
//     char car;
// };

// int main()
// {
//     union money m1;
//     m1.rice = 34;
//     m1.car = 'o';
//     m1.pound = 34.5;
//     cout<<m1.rice<<endl;
//     cout<<m1.pound<<endl;
//     cout<<m1.car<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    enum meal
    {breakfast,lunch,dinner};
    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;
    cout<<m1<<endl;
    cout<<m3<<endl;
    cout<<m2<<endl;
    cout<<(m1==2)<<endl;
    cout<<(m1==1)<<endl;
    cout<<(m1==0)<<endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    return 0;
}