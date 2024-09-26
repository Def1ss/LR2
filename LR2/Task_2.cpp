#include <iostream>

int main()
{
    double x , y , z ;
    std::cout << "Введите x , y , z :"<<std::endl;
    std::cin >> x >> y >> z;
    if (x + y > z && x + z > y && y + z > x)
    {
        std::cout << "Данный треугольник существует " ;
    }
    else 
    {
        std::cout << "Данный треугольник не существует ";
    }
}