#include <iostream>

int main()
{
    int a, b;
    int sum = 0;

    std::cout << a << " " << b << std::endl ;
    std::cin >> a >> b ;
    std::cout << a << " " << b << std::endl ;

    for ( int i = a ; i <= b  ; i++ )
    {
        sum += i ;
        std::cout << sum << " " << "a = " << a << " "<< "b = " << b << " "<< "i = "<< i << " " << "sum = " << sum <<  std::endl;       
    }
    std::cout << sum ;
}