// Example program
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    double apothem, base;
    int sides;
    
    std::cout << "Number of sides: ";
    std::cin >> sides;
    std::cout << "Apothem length: ";
    std::cin >> apothem;
    std::cout << "Base length: ";
    std::cin >> base;
    std::cout << "The area of your " << sides << " sided polygon is " << ((apothem*base)/2)*float(sides) << std::endl;
}
