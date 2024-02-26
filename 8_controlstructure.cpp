// 1. if Statement
// 2. if-else Statement
// 3 .Nested if Statement
// 4. if-else-if Ladder
// 5. switch Statement == range case low ... high: or case 'A' ... 'Z':
// 6. Conditional Operator == (condition) ? [true_statements] : [false_statements];
// 6. Jump Statements:
//      break
//      continue
//      goto
//      return

#include <iostream>
using namespace std;

int main()
{
    // cout << "******************************if-else******************************" << endl;
    // int age;
    // cout << "enter your age : " << endl;
    // cin >> age;
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "you are not vote !" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you are child" << endl;
    // }
    // else if (age < 0)
    // {
    //     cout << "you are not born" << endl;
    // }
    // else
    // {
    //     cout << "you are vote !" << endl;
    // }


    cout<<"******************************switch case******************************"<<endl;
    int age;
    cout << "enter your age : " << endl;
    cin >> age;
    switch (age)
    {
    case 1 ... 17 :
        cout<<"you are not voted!"<<endl;
        break;

    case 18 :
        cout<<"you are child"<<endl;
        break;

    case 19 ... 100:
        cout<<"you are voted!"<<endl;
        break;
    
    default:
    cout<<"envelid  age"<<endl;
        break;
    }
    return 0;
}