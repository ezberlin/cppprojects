#include <iostream>

using namespace std;

int main()
{

    for (int i=0;i<1000000;i++)
    {
        int moneyInTheBank=-1;

        getAccount(moneyInTheBank);

        if(moneyInTheBank == -1)
            cout<<"ERROR";
        if(moneyInTheBank<10000)
            sellHouse();
        else
            buyCar();
        cout<< moneyInTheBank;
    }

    return 0;
}
