#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "The number of given arguments is " << argc << std::endl;
	std::cout << "The 0th argument is  " << argv[0] << std::endl;
	if(argc > 1)
	{
		std::cout << "The 1st argument is  " << argv[1] << std::endl;
	}
	else
	{
		std::cout<< "there are no arguments\n";
	}


	return 256;
}