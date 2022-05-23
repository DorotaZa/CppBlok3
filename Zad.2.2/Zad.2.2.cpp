//Zad. 2.2
//Utwórz 3 zmienne typu int, a następnie przypisz im wartości
//wylosowane z zakresu 1 - 10.

#include <iostream>
#include <time.h>

int random1To10()
{
    return rand() % 10 + 1;
}

int main()
{
    int num1 = random1To10();
    int num2 = random1To10();
    int num3 = random1To10();

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    
}