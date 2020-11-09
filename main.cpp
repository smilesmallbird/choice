#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 1;
    int sums = 100;
    while(a < 10000){
        a = a + 1;
        std::cout << "a is " << a << std::endl;
        ++a;
    }
    std::cout << "a is " << a;
    int b;
    std::cin >>  b;

    //switch()
    switch(b){
        case 1:
            std::cout << "b is " << b << std::endl;
            break;
        case 2:
            std::cout << "b is " << b << std::endl;
            break;
        case 3:
            std::cout << "b is " << b << std::endl;
            break;
        case 4:
            std::cout << "b is " << b << std::endl;
            break;
        case 5:
            std::cout << "b is " << b << std::endl;
            break;
        default:
            std::cout << "b is not find6"  << std::endl;
            break;

    }
    return 0;
}
