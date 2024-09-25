#include <iostream>
#include <cmath>


int main()
{
    double A , D ,x ,itog , p , K , C , B;
    std::cout << "Введите 2 значения "<< std::endl;
    std::cin >> p >> x >> K >> D >> C >> B;
    A = x + sin(p);
    B = exp(K);
    itog = 1+ (K*K) / (2 * A * B) - B + (D * C);
    std::cout << itog ;

}