#include <iostream>
#include <cmath>


int main()
{
    double A,  D ,x , y , z ,itog , p , K , C , B , h,d ;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> x >> z >> p >> C >> K >> D ;
    A = sin(x) - z;
    B = abs(p - x);
    itog = (A + B) * (A + B) - K /C / D;
    std::cout << itog ;

}