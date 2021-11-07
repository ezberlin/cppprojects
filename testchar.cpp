#include <iostream>

using namespace std;

int main()
{
    int i;
    cout<<"an integer needs " << sizeof(i) << " bytes to be saved\n";
    char ch1 = 105;
    cout<<"a char needs " << sizeof(ch1) << " bytes to be saved\n";
    unsigned int ui;
    cout<<"an unsigned int needs " << sizeof(ui) << " bytes to be saved\n";
    unsigned long long int ulli;
    cout<<"an unsigned long long int needs " << sizeof(ulli) << " bytes to be saved\n";

    return 0;
}
