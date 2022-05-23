// Zad.2.5.
//Napisz program do zaokrąglania liczb zmiennoprzecinkowych,
//parametrem n jest liczba cyfr po przecinku

#include <iostream>
#include <cmath>
#include <iomanip> //do setprecision

int main()
{
    float num = 0; //lepiej zmienic na typ double
    std::cout << "Hello World!\n";
}


//
#include <iostream>
#include <cmath>

float roundFunction(float number, int n)
{
    float num = 0;

    int a = 0;
    a = pow(10, n);
    num = round(number * a) / a; // num = 12454/1000 = 12.453
    return num;
}

int main()
{
    float numberF = 12.4543645; //tu tez zmienic na double
    double number = 12.4543645;
    int n = 0;
    n = 5;
    std::cout << std::setprecision(10) << numberF << std::endl;
    std::cout << std::setprecision(10) << number << std::endl;;


    std::cout << "Wyniki: \n";
    std::cout << roundFunction(number, 1) << std::endl;
    std::cout << roundFunction(number, 2) << std::endl;
    std::cout << roundFunction(number, 3) << std::endl;
    std::cout << roundFunction(number, 4) << std::endl;
}