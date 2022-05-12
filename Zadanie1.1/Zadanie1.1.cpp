//Zadanie 1.1
//Zadeklaruj trzy zmienne liczbowe (całkowite) i przypisz im wartości.
//stępnie wypisz wartość największej z nich.

//#include <iostream>
//int main()
//{
//    int num1 = 13;
//    int num2 = 7;
//    int num3 = 3;
//
//    if ((num1 > num2) && (num1 > num3))
//    {
//        std::cout << "Max = " << num1 << std::endl;
//    }
//    else if ((num2) > (num3))
//    {
//        std::cout << "Max = " << num2 << std::endl;
//    }
//    else 
//    {
//        std::cout << "Max = " << num3 <<std::endl;
//    }


    //MAX  z uzyciem tablic 


#include <iostream>

    int main()
    {
        const int size = 3;
        int numbers[size] = { 2,19,-5 };
        int max = 0;

        for (int i = 0; i < size; ++i)
        {
            if (numbers[i] > numbers[max];)
            {
                max = i;
            }

            std::cout << "Max number is: " << numbers[max];
        }


    }

// KOmentarz testowy
// 
//    //ternary
//    int t = 0;
//    std::cout << "enter the number: ";
//    std::cin >> t;
//    std::string condition = (t > 6) ? "you rock!" : "you suck!";
//    std::cout << condition;
//}

//#include <iostream>
//
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = 3;
//
//    if ((a > b) && (a > c))
//    {
//        std::cout << "najwieksza jest " << a << std::endl;
//
//    }
//    else if ((b > a) && (b > c))
//    {
//        std::cout << "najwieksza jest " << b << std::endl;
//
//    }
//    else if ((c > a) && (c > b))
//    {
//        std::cout << "najwieksza jest " << c << std::endl;
//
//    }
//    else
//    {
//        std::cout << "nie ma najwiekszej liczby";
//
//    }


//#include <iostream>
//
//int main()
//{
//    int a = 3;
//    int b = 6;
//    int c = 8;
//
//    if ((a > b) && (a > c))
//    {
//        std::cout << "Największa: " << a << std::endl;
//    }
//    else if ((b > a) && (b > c))
//    {
//        std::cout << "Największa: " << b << std::endl;
//    }
//    else
//    {
//        std::cout << "Największa: " << c << std::endl;
//    }
//}



    //TERNARY od Sławomira

    /*int l = 0;
    std::cin >> l;

    std::cout << (l < 5) ? 0 : 1;
*/