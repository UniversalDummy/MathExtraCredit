// Example program
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int num, i=0, store;
    std::cin >> num;
    
    while (pow(i,2) < num) {
        i++;
        if (num % int(pow(i,2)) == 0) {
            store = i;
        }
    }
    i--;
    std::cout << store;
    
    if (!(num/pow(store,2) == 1)) {
        std::cout << "sqrt(" << num/pow(store,2) << ')';
    }
    
    std::cout << std::endl;
    
    return 0;
}
