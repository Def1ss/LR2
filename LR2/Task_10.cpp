#include <iostream>

double com(double v)
{
    if (v < 0) return -1; // Отрицательные числа не имеют действительного корня

    double L = 0;
    double R1 = v;
    double m;

    while (R1 - L > 0.000001) // заданная точность
    {
        m = (L + R1) / 2; // пересчет M
        if (m * m <= v)
        {
            L = m; // сужаем диапазон к правой части
        }
        else 
        {
            R1 = m; // сужаем диапазон к левой части
        }
    }
    
    return m; // возвращаем найденный корень
} 



int main ()
{
    double x1 , x2 , y1 , y2 , r1 , R , M,a ;
    std::cout << "Введите значение первой окружности в данном порядке : x , y , r " << std::endl;
    std::cin >> x1 >> y1  >>  r1 ;
    std::cout << "Введите значение второй окружности в данном порядке : x , y , r " << std::endl;
    std::cin >> x2 >> y2 >> R ;
    M = com((x2-x1) * (x2-x1) - (y2-y1)*(y2-y1));
    if (M < r1)
    {
        std::cout << "Да" << std::endl;
    }
    else 
    {
        if (M < R)
        {
            std::cout << "Да,но справедливо и обрытное для двух фигур" << std::endl;
        }
        else
        {
            if (M == R+r1 || M < R + r1)
            {
                std::cout << "Фигуры пересекаются" << std::endl;
            }
            else
            {
                std::cout << "Ни одно условие не выполнено" << std::endl;
            }
        }
    }
}
