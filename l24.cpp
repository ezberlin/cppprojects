#include <iostream>
using namespace std;

int  DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writing number eleven: " << 11 << endl;
	cout << "Performing division 110 / 11 = " << 110 / 11 << endl;
	cout << "22 - 7 = " << 22 - 7 << endl;
	cout << "22 * 7 = " << 22 * 7 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
	cout << "Pi actually is  22 / 7 = " << 22.0 / 7 << endl;

	return 0; 
}

int main()
{
	return DemoConsoleOutput();
}