#include <iostream>
#include <cmath>


int main()
{
    double A,  D ,x , y , z ,itog , p , K , C , n , m ;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> n >> x >> K >> D >> m ;
    A = abs(n + m);
    D = tan(x);
    itog = 1,29 + (K/A) + D * D ;
    std::cout << itog ;

}