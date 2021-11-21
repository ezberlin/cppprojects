#include <iostream>
using namespace std;

enum YourCards
{
    Ace = 43,
    Jack,
    Queen,
    King
};

int main()
{
    cout << Queen << endl;
    int Integer = 0;
   
   cout << "The size of an unsigned int is " << sizeof(unsigned int) << ", the size of a signed int is " << sizeof(int) << ", and the size of a long is " << sizeof(long) << endl;
   cout << "Write the radius of the circle: " << endl;
   float radius {0};
   cin >> radius;
   const float pi {3.14};
   const float circ = 2*pi*radius;
   const float area = pi*radius*radius;
   cout << "circumference = " << circ << " and area = " << area << "." <<endl;
   return 0;   
}
