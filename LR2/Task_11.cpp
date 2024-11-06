#include <iostream>



int main()
{
    int h1 , h2, m1 , m2 ,mh1 , mh2 ,m , h;
    std::cout << "Введите время (сначала часы потом минуты)" << std::endl;
    std::cin >> h1 >> m1 ;
    mh1 = h1 * 60 + m1 ;
    std::cout << "Введите время (сначала часы потом минуты)" << std::endl;
    std::cin >> h2 >> m2 ;
    mh2 = h2 * 60  + m2 ;
    m = (mh2 - mh1) % 60;
    h = (mh2 - mh1) / 60;
    std::cout << h<< " часов" << " : " << m << " минут" <<std::endl;
}