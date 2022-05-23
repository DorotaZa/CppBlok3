//Zad1.3
// Sprawdź, czy wartość zmiennej pobranej od użytkownika jest większa, mniejsza, czy równa zero
//(wypisz na ekranie odpowiedni komunikat).
//Optymalizacyjnie (do zapamietania): wieksza, mniejsza, 0.

#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Add the number: ";
    std::cin >> num;


    if (num > 0)
    {
        std::cout << "Liczba wieksza od zera" << std::endl;
    }
    else if (num < 0)
    {
        std::cout << "Liczba mniejsza od 0." << std::endl;
    }
    else
    {
        std::cout << "Liczba rowna 0." << std::endl;
    }
}
