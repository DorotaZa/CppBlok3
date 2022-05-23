// Zad.2.6. standardowe + z dodaniem pliku naglowkowego

#include <iostream>
#include <math.h>

void printDoubleNumber(double d)
{
    //123
    int a = static_cast<int>(d); //czesc calkowita wyciagnieta z double'a
    //.456
    double b = d - a; //czesc po przecinku/kropce
    int n1 = 1; //liczba cyfr czesci calkowitej
    int n2 = 1; //liczba cyfr czesci po przecinku
    //123
    
    while (a > 9) //tutaj zmiana warunku z 0 na 9 dlategp ze sp[rawdzamy to to liczba dwucfrowa;tu zliczamy ile jest cyfr w czesci calkowitej, robimy to bo ni4 jestesmy w stanie je wyswiwetlic od lewej do prawej
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int>(d); //odswiezamy wartosc bo nam sie wyzerowala powyzej

    for (int i = 0; i < n1; i++)

    {
        int p = static_cast<int>(pow(10, n1 - i - 1));
        int c = a/p;
        a -= c * p;



        std::cout << c;
    }

    std::cout << '.';
    //.456 *10 = 4.56 -> 4
    //(4.56-4) +10 = 5.6 -> 5

    do 
    {
        b *= 10;
        int c = static_cast<int>(b);
        std::cout << c;
        b -= c;
    }
    while(b>0.0)

}

int main()
{
    std::cout << printDoubleNumber;
}

