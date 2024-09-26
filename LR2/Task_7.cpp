#include <iostream>


int main ()
{
    double a, b , c ;
    int N;
    std::cout << "Введите a , b , c : " << std::endl;
    std::cin >> a >> b >> c ;
    std::cout << "Введите N:" << std::endl;
    std::cin >> N; 
    switch (N)
    {
    case 2:
        std::cout << b * c - a * a << std::endl;
        break;
    case 3:
        std::cout << a - b * c << std::endl;
        break;
    case 7:
        std::cout<< a * a + c << std::endl; 
        break;
    case 56:
        std::cout << b * c << std::endl;
        break;
    default:
        std::cout << (a + b ) * (a + b) * (a + b);
        break;
    }
}