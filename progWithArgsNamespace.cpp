#include <iostream>

int main(int argc, char* argv[])
{
	cout << "The number of given arguments is " << argc << endl;
	cout << "The 0th argument is  " << argv[0] << endl;
	if(argc > 1)
	{
		cout << "The 1st argument is  " << argv[1] << endl;
	}
	else
	{
		cout<< "there are no arguments\n";
	}


	return 256;
}