// Zadanie1.6.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>







int main()
{
    std::cout << "Hello World!\n";
}




int licznik = kwota = x; //za x wstaw kwotę do rozbicia 
int il_setek = 0, il_piecdziesiatek = 0, il_dziesiatek = 0, il_piatek = 0, il_dwojek = 0, il_jedynek = 0;
while (licznik >= 100)
{
    il_setek += 1;
    licznik = licznik - 100;
}
while (licznik >= 50)
{
    il_piecdziesiatek += 1;
    licznik = licznik - 50;
}
while (licznik >= 10)
{
    il_dziesiatek += 1;
    licznik = licznik - 10;
}
while (licznik >= 5)
{
    il_piatek += 1;
    licznik = licznik - 5;
}
while (licznik >= 2)
{
    il_dwojek += 1;
    licznik = licznik - 2;
}
while (licznik >= 1)
{
    il_jedynek += 1;
    licznik = licznik - 1;
}
//tutaj wyświetl sobie zmienne il_* które wyświetlą Ci nominały w takiej ilości, aby było ich najmniej. 


//
//od magdy
{
    float amount = 1410;
    float tablica[15] = { 500.00, 200.00, 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };
    float tablicaWynikow[15] = { 0 };
    for (int i = 0; i < 15; ++i)
    {
        int counter = 0;

        while (amount - tablica[i] >= 0)
        {
            amount = amount - tablica[i];
            counter++;
        }


        tablicaWynikow[i] = counter;
    }
    for (int i = 0; i < 15; ++i)
        std::cout << tablicaWynikow[i] << std::endl;
}




Sławomir Romaniuk  6:28 PM
// Zad1.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <math.h>
void howMany(float value)
{
    //wartosc dostepnych nominaly; dopisanie f oznacza ze podajemy liczbe typu float
    float data[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01 };
    int amount[15]; //liczba poszczegolnych nominalow
    int n = 0; //iterator po nominalach
    for (int i = 0; i < 15; i++) //inicjalizowanie tablicy zerami
    {
        amount[i] = 0;
    }
    while (value > 0.001) //troche inny warunek ze wzgledu na niedokladnosc obliczen na liczbach zmiennoprzecinkowych
    {
        if (round(value - data[n]) >= 0)
        {
            amount[n] = std::floor(value / data[n]); //floor -> zaokraglanie w dol
            value -= amount[n] * data[n]; //zdejmujemy wartosc uzyskana jako (liczba nominalow * wartosc nominalu)
            //std::cout << value << " "<< value / data[n] << std::endl;
        }
        n++;
    }
    for (int i = 0; i < 15; i++)
    {
        std::cout << data[i] << " : " << amount[i] << std::endl;
    }
}
int main()
{
    howMany(123.45f);
}


//najnowsze s romaniuk
// Zad1.6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <math.h>
void howMany(float value)
{
    //wartosc dostepnych nominaly; dopisanie f oznacza ze podajemy liczbe typu float
    float data[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01 };
    int amount[15]; //liczba poszczegolnych nominalow
    int n = 0; //iterator po nominalach
    for (int i = 0; i < 15; i++) //inicjalizowanie tablicy zerami
    {
        amount[i] = 0;
    }
    while (value > 0.001) //troche inny warunek ze wzgledu na niedokladnosc obliczen na liczbach zmiennoprzecinkowych
    {
        if (round(value - data[n]) >= 0)
        {
            amount[n] = std::floor(value / data[n]); //floor -> zaokraglanie w dol
            value -= amount[n] * data[n]; //zdejmujemy wartosc uzyskana jako (liczba nominalow * wartosc nominalu)
            //std::cout << value << " "<< value / data[n] << std::endl;
        }
        n++;
    }
    for (int i = 0; i < 15; i++)
    {
        std::cout << data[i] << " : " << amount[i] << std::endl;
    }
}
int main()
{
    howMany(123.45f);
}