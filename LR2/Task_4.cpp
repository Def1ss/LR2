#include <iostream>


int main ()
{
    int x, y;
    std::cout << "Введите x , y :"<<std::endl;
    std::cin >> x >> y;

    if(x>y)
    {
        y = 0;
    }
    else 
    {
        if (x<y)
        {
            x = 0;
        }
        else 
        {
            x = y = 0;
        }
    }

    
    double a , b , c ,k ;
    std::cout << "Введите a , b ,c :" << std::endl;
    std::cin >> a >> b >> c ;
    std::cout << "Введите k :" << std::endl;
    std::cin >> k ;
    if (a > b  && a > c )
    {
        a -= k;
    }
    else 
    {
        if( b > c )
        {
            b -= k;
        }
        else
        {
            c -= k;
        }
    }
    std::cout << x << " " << y << " " << a << " " << b <<  " " << c;
}