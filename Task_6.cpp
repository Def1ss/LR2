#include <iostream>
#include <cmath>


int main()
{
    double A,  D ,x , y , z ,itog , p , K , C , n , m ;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> y >> x >> K >> D >> C ;
    A = x + y;
    D = abs(C - A);
    itog = 10.1 + (A/C) + (D/K/K);
    std::cout << itog ;

}