#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displaysetPrice(void);
};

void shop ::setPrice(void)
{ // :: <==scop resulvulatio operator
    cout << "enter the Id of your Item no "<<counter+1<< endl;
    cin >> itemId[counter];
    cout << "enter the Price of your Item : " << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::displaysetPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemId[i] << " is " << ItemPrice[i] << endl;
    }
}

int main()
{
    shop dukkan;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displaysetPrice();
    return 0;
}