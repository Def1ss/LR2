#include <iostream>



double com(double v)
{
    if (v < 0) return -1; // Отрицательные числа не имеют действительного корня

    double L = 0;
    double R = v;
    double M;

    while (R - L > 0.0000000001) // заданная точность
    {
        M = (L + R) / 2; // пересчет M
        if (M * M <= v)
        {
            L = M; // сужаем диапазон к правой части
        }
        else 
        {
            R = M; // сужаем диапазон к левой части
        }
    }
    
    return M; // возвращаем найденный корень
}

int main ()
{
    double a, b , c , D,x1 , x2 , x3 , x4 , y1 , y2;
    std::cout << "Введите значения a , b , c для уравнения вида : ax^4 + bx^3 + cx^2 + bx + c = 0 " << std::endl;
    std::cin >> a >> b >> c;
    D = (b * b )- (4 * a * c) + (8 * a * a);
    if (D > 0)
    {
        y1 = (-b + com(D)) / 2 * a ;
        y2 = -(b + com(D)) / 2 * a ;
        x1 = (-y1 - com(y1 * y1 - 4 )) / 2 ;
        x2 = (-y1 + com(y1 * y1 - 4 )) / 2 ;
        y2 = (-b + com(D)) / 2 * a;
        x3 = (-y2 - com(y2 * y2 - 4 )) / 2;
        x4 = (-y2 + com(y2 * y2 - 4 )) / 2;
        std::cout << x1 << " " << x2 << " "<< x3 << " " << x4;
    }
    else 
    {
        if (D = 0)
        {
            y1 = -b/(2*a);
            x1 = (-y1 - com(y1 * y1 - 4 )) / 2 ;
            x2 = (-y1 + com(y1 * y1 - 4 )) / 2 ;
            std::cout << x1 << " "<< x2;
        }
        else
        {
            std::cout << "Дискриминант отрицательный" << std::endl;
        }
    }

}