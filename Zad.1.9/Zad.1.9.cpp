//Zad.1.9
//Używając pętli while losuj liczby, aż do uzyskania liczby mniejszej niż 0.03. Wszystkie liczby wyświetlaj. Wyświetl liczbę losowań.

#include <iostream>
#include<time.h>

int main()
{
    srand(time(NULL));
    float num = 0.0f;
    do
    {
        num = rand() / 10000.0f;
        std::cout << num << std::endl;
    } while (num > 0.03f);

}
