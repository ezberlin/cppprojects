#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    uint64_t moneyInBank {9'000'000} ;
    uint16_t smallMoney {moneyInBank}; //warning
    double pi = 3.141'592'65000000000000000000000000000000000000000000000000000000000000000000000000000000001;
    float pi2 {pi};

    cout <<  "The money in bank equals " << moneyInBank << "." <<endl;
    cout <<  "The small money is " << smallMoney << "." <<endl;
    cout <<  "double Pi is " << pi << "." <<endl;
    cout <<  "float Pi is " << pi2 << "." <<endl;


    return 0;
}
