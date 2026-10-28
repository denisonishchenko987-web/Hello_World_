#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello world\n";

    std::cout << "Input your name please:";
    std::string name;
    std::getline(std::cin, name);
         
    int x;
    std::cout << "input x: ";
    std::cin >> x;

    if (x != 0) 
    {
        std::cout << x;
    }
}