#include <iostream>
using namespace std;

int main()
{
	int number {0};
	cout << "Enter number: ";
	cin >> number;
	for (int t = 2; t <= number; t++)
	{
		if (t != number)
		{
			if (number % t == 0)
			{
				cout << number << " isn't prime." << endl;
				break;
			}
		}
		else
		{
			cout << number << " is prime." << endl;
		}
	}
	return 0;
}
