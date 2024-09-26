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

double acos(double x)
    {
        double M_PI = 3.1415;
        double a  = x;
        for (int i = 1; i <= 1000 * 2; i += 2)
        {
            double f = 1;
            for (int j = i; j + 1 > 0; j -= 2) f *= (double)j / (j + 1);
            a += f * com(x ) * com(x) * com(x) / (i + 2);
        }
        return M_PI / 2 - a ;
    }



int main ()
{
    double x1 , x2 , y1 , y2 , x3 , y3 ,  M1 ,M2 ,M3,h1,h2,h3,pe ,m1,m2 ,m3,b1 ,b2 ,b3;
    std::cout << "Введите координаты точки в данном порядке : x , y " << std::endl;
    std::cin >> x1 >> y1 ;
    std::cout << "Введите координаты точки в данном порядке : x , y " << std::endl;
    std::cin >> x2 >> y2 ;
    std::cout << "Введите координаты точки в данном порядке : x , y " << std::endl;
    std::cin >> x3 >> y3 ;
    M1= com((x2-x1) * (x2-x1) - (y2-y1)*(y2-y1));
    M2 = com((x3-x2) * (x3-x2) - (y3-y2)*(y3-y2));
    M3 = com((x3-x1) * (x3-x1) - (y3-y1)*(y3-y1));
    pe = (M3+ M2 + M1) / 2;
    h1 = (2*com(pe * (pe-M1)*(pe-M2)*(pe-M3))) / M1;
    h2 = (2*com(pe * (pe-M1)*(pe-M2)*(pe-M3))) / M2;
    h3 = (2*com(pe * (pe-M1)*(pe-M2)*(pe-M3))) / M3;
    m1 = com(2 * M3 * M3 + 2 * M2 * M2 - M1 * M1) / 2;
    m2 = com(2 * M3 * M3 + 2 * M1 * M1 - M2 * M2) / 2;
    m3 = com(2 * M1 * M1 + 2 * M2 * M2 - M3 * M3) / 2;
    b1 = com(M1 * M2 * (M1 + M2 + M3 )*(M1 + M2 - M3)) / (M1 + M2 );
    b2 = com(M1 * M3 * (M1 + M2 + M3 )*(M1 + M3 - M2)) / (M1 + M3 );
    b3 = com(M3 * M2 * (M1 + M2 + M3 )*(M3 + M2 - M1)) / (M3 + M2 );

}