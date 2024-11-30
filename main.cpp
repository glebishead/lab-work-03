#include <iostream>
#include <bitset>


int main() {
    int x, i;
    int k = 1;
    
    std::cout << "Enter x" << std::endl;
    std::cin >> x;
    
    std::cout << "Enter i" << std::endl;
    std::cin >> i;
    
    k = k << i;
    
    std::cout << x << " is " << std::endl << std::bitset<sizeof(int) * 8>(x) << " binary" << std::endl;
    
    x = x & ~k;
    std::cout << "Result - " << x << " is " << std::endl;
    std::cout << std::bitset<sizeof(int) * 8>(x) << " binary" << std::endl;
    // std::cout << std::bitset<sizeof(int) * 8>(k) << std::endl;
    return 0;
}
