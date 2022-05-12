//Zad 1.5
//Napisz funkcję sprawdzającą czy podane ciągi znaków są palindromem. Na ekranie wyświetl odpowiedź.

#include <iostream>
#include <string>

bool palindrom(std::string str)
{
    int dl = str.size();
    for (int i = 0; i < dl / 2; i++)
    {
        if (str.at(i) == str.at(dl - i - 1))
        {
            return 0;
        }
        else
        {
            break;
            return 0;
            
        }
    }
    return 1; //true;
}

int main()
{
    std::string tekst = {};
    std::cout << "Podaj tekst: ";
    std::cin >> tekst;

    std::cout << palindrom(tekst);
}



bool czyJestPalindron(std::string str)
{
    int dl = str.size();
    for (int i = 0; i < dl / 2; i++)
    {
        if (str.at(i) == str.at(dl - i - 1))
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    std::string teskt = {};
    std::cout << "Podaj slowo" << std::endl;
    std::cin >> teskt;
    czyJestPalindron(teskt);
}




//SDA
//17:46
//#include <iostream>
//bool Palindrom(std::string word)
//{
//    int i = 0;
//    int j = word.size() - 1;    for (; i < j; i++, j--)
//    {
//        if (word[i] != word[j])
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    std::cout << std::boolalpha << Palindrom("ADA");
//}


//od Slawomira
#include <iostream>
#include <string>
bool czyJestPalindrom(std::string str)
{
    int dl = str.size(); //zwrocenie dlugosci - to samo co length
    for (int i = 0; i < dl / 2; i++) //przechodzimy po kolejnych literach stringa od poczatku do polowy
    { 
        //if (str.at(i) != str.at(dl - i - 1)) //metoda .at() to samo co []; sprawdzamy czy litery sa rozne
        if (str[i] != str[dl - i - 1])
        { //jesli w ktoryms momencie litery sa rozne -> to nie jest palindrom i zwracamy false
            return false;
            //std::cout << "zaraz bedzie break" << std::endl;
            //break;
        }
    }
    //jezeli caly for wykonal sie poprawnie (czyli wszystkie pary liter byly takie same) -> to jest palindrom
    return true;
}
int main()
{
    std::cout << czyJestPalindrom("KAJAK") << std::endl;
    std::cout << czyJestPalindrom("ANNA") << std::endl;
    std::cout << czyJestPalindrom("KAJA") << std::endl;
}