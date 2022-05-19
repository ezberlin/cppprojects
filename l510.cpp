#include <iostream>

int main(int argc, char **argv) {
//  /*   std::cout << "Hello, world!" << std::endl;*/
    int x = 100;
    for(int i = 0;i<10;i++)
    {
        x = x+20;
        x = x*2;
    }
    std::cout << sizeof(x)<< std::endl;
    std::cout<<x<<std::endl;
    int myArray [10] = {0};
    std::cout << sizeof(myArray)<< " bytes"<< std::endl;
    return 0;
}
