#include <iostream>


int main ()
{
    double x;
    std::cout << "Введите значение переменной x :";
    std::cin >> x ;
    double x2 = x * x;
    double x3 = x2 * x;

    double firstf = 23  * x3 + 69 * x2 + 32 * x + 8;
    double doublef = -23 * x3 + 69 * x2 - 32 * x + 8;

    std::cout << "Результат выражения 23x^3 + 69x^2 + 32x + 8 :" << firstf << std::endl;
    std::cout << "Результат выражения -23x^3 + 69x^2 - 32x + 8 :" << doublef << std::endl;
    return 0;
}