#include <iostream>

double com(double v)
{
    if (v < 0) return -1; // Отрицательные числа не имеют действительного корня

    double L = 0;
    double R = v;
    double M;

    while (R - L > 0.000001) // заданная точность
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

int main()
{
    double a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    double result = com(a);
    
    if (result == -1) {
        std::cout << "Cannot calculate the square root of a negative number." << std::endl;
    } else {
        std::cout << "The square root of " << a << " is approximately " << result << std::endl;
    }

    return 0;
}