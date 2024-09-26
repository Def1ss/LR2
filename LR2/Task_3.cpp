#include <iostream>


int main()
{
    double b1 , q , sum ;
    std::cout << "Введите b1 :";
    std::cin >> b1;
    q = 1.0/(5.0+1.0);
    sum = b1/(1.0-q);
    std::cout << sum;
    
}