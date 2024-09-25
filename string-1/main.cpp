#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string input;

        std::cout <<"Masukkan Sebuah String:";
        std::getline(std::cin,input);

        std::cout << "Panjang String adalah: " << input.length() <<
             std::endl;
    return 0;
}
