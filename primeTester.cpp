#include <iostream>
using namespace std;

int main()
{
  bool is_prime = true;
  long long int number {0};
  cout << "Enter number: ";
  cin >> number;
  if(number == 1)
    is_prime = false;
  for (long long int t = 2; t < number; t++)
  {
      if (number % t == 0)
      {
        is_prime = false;
        break;
      }
  }
  if(is_prime)
    cout << number << " is prime." << endl;
  else
    cout << number << " isn't prime." << endl;

  return 0;
}


