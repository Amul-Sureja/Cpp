#include <iostream>
using namespace std;

int main()
{
    // cout << "********************break*************************" << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 2)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    cout << "********************continue*************************" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}