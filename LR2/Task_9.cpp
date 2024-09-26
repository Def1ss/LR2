#include <iostream>
#include <cmath>


int main() 
{
    int enter ;
    double itog, x , a ,b ;
    std::cout << "Выберите вариант : 2x | x^3 | x/3 (и напишите его порядковый номер)" << std::endl;
    std::cin >> enter;
    std::cout << "Введите x , a , b :" << std::endl;
    std::cin >> x >> a >> b;
    switch (enter)
    {
    case 1 :
        itog = (a * 2 * x) - log(x + 2.5 ) + b * (exp(x) - exp(-x));
        break;
    case 2 :
        itog = (a * pow(x,3)) - log(x + 2.5 ) + b * (exp(x) - exp(-x));
        break;
    default:
        itog = (a * (x/3)) - log(x + 2.5 ) + b * (exp(x) - exp(-x));
        break;
    }
}