#include <iostream>
#include <cmath>


int main()
{
    double A,  D ,x , y , z ,itog , p , k , C , B , h,d ;
    std::cout << "Введите x , k , z ,p , D , C "<< std::endl;
    std::cin >> x >> k >> z >> p >> D >> C ;
    A = log(x) - k ;
    B = sqrt(z) ;
    itog = D * D + (C * C / 0.75 * A ) + B;
    std::cout << itog ;

}