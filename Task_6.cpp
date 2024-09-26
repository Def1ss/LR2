#include <iostream>
#include <cmath>


int main()
{
    double A,  D ,x , y , z ,itog , p , K , C , B , h,d ;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> x >> d >> K >> C ;
    A = log10(x);
    B = x + exp(d);
    itog = (A + B) - (C * C / K);
    std::cout << itog ;

}