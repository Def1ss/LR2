#include <iostream>



int main()
{
    double x , y , max;
    std::cout << "Введите x , y :"<< std::endl;
    std::cin >> x >> y ;
    max = x > y ? x : y ;
    std::cout << max;
}