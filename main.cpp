#include <iostream>
#include <bitset>


int main() {
    int x, i;
    int k = 1;
    
    std::cout << "Введите x. Число для изменений" << std::endl;
    std::cin >> x;
    
    std::cout << "Введите i. i-ый бит числа " << x << " изменится на 0." << std::endl;
    std::cin >> i;
    
    k = k << i;
    
    std::cout << "Число " << x << " в двоичном виде " << std::endl;
    std::cout << std::bitset<sizeof(int) * 8>(x) << std::endl;
    
    x = x & ~k;
    std::cout << "Результат" << std::endl;
    std::cout << std::bitset<sizeof(int) * 8>(x) << std::endl;
    // std::cout << std::bitset<sizeof(int) * 8>(k) << std::endl;
    return 0;
}
