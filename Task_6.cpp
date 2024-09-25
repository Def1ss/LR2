#include <iostream>
#include <cmath>


int main()
{
    double A , D , b ,x ,itog;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> D >> x;
    A = D*x/b ;
    b = x+D;
    itog = (A*A + b * cos(x)) / (D* D *D + (A + D - b));
    std::cout << itog ;

}