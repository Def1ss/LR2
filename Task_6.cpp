#include <iostream>
#include <cmath>


int main()
{
    double A,  D ,x , y , z ,itog , p , K , C , B , h ;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> x >> p >> A  >> B >> h >> K >> C >> D ;
    A = x + p;
    B = log(h);
    itog = 0.78*B + A * A * A / K /C / D;
    std::cout << itog ;

}