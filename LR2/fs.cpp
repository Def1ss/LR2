#include <iostream>

using namespace std;


int main (){
    string input;
    std::cout << "Чтобы начать работу напишите calc , затем введите 2 значения "<<endl;
    cin >> input; ;
    int b = 2 ;
    while(b >= 1){ 
    short int a;
    if(input == "help") {
        a = 1;
    }
    if (input == "exit"){
        a = 3;
    }
    if (input == "calc"){
        a = 2;
    }
    int c , d ;
        switch (a)
        {
        case 1:
            std::cout << "help - for help \nexit - to stop the program \ncalc - to calculate " << endl;
            cin >> input ;
            break;
        case 2:
            std::cout << "Enter 2 numbers"<<endl;
            cin >> d >> c ;
            std::cout << d + c  << endl ;
            std::cout << "Желаете повторить (да / нет (закрыть программу))"<<endl;
            cin >> input ;
            if (input == "да"){
                a = 2;
            }
            if (input == "нет"){
                a = 3;
            } 
                break;
        case 3:
            b = -2;
            break;
        }
        ++b;
    }
}