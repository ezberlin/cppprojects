#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    auto coinFlippedHeads {true};
    auto largeNumber {250000000000000};
    typedef unsigned long long int ulli;// unsigned long long int = ulli
    ulli x {100};
    cout << "coinFlippedHeads = " << coinFlippedHeads;

    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;

    cout << "largeNumber = " << largeNumber;

    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;
    cout <<"the following variable was written with typedef "<< x<<endl;
    return 0;
}
