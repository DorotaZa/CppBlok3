// Zad.2.4.
//Sprawdź czy podany numer telefonu użytkownika jest prawidłowy
//(musi zawierać 8 cyfr i nie może zaczynać się na 0).

#include <iostream>
#include <string>




bool ifValid(std::string phoneNumber)
{
    
  

    for (int i = 0; i < phoneLength; ++i)
    {
        if (phoneNumber[0] == 0)
        {
            return false;
        }
        
    }
    return true;
}


//
//    if (phoneNumber[0] == 0)
//    {
//        return "The number cannot start from 0.";
//    }
//    else
//    {
//        do {
//            std::cout << "Please enter your phone number: ";
//            std::cin >> phoneNumber;
//            ++i;
//           } 
//        while (phoneNumber.size() != 8);
//        return true;
//    }
//}


bool ifValid(std::string phoneNumber)
{
    int phoneLength = phoneNumber.size();

    for (int i = 0; i < phoneLength; ++i)
    {
        if (phoneNumber.length() != 8)
        {
            std::cout << "The number must contain 8 digits.";
        }
        else if (phoneNumber[0] == 0)
        {
            std::cout << "The number cannot start from '0." << std::endl;

        }
    }
        return true;
}



int main()
{
    std::string phoneNumber = {};
    std::cout << "Enter your phone number: " << std::endl;
    std::cin >> phoneNumber;
    //std::cout << ifValid(phoneNumber);

    if (phoneNumber[0] != 0)
            {
                do {

                    ++i;
                   } 
                while (phoneNumber.size() != 8);
            }

    std::cout << phoneNumber;
    
}



///rozwiazanie z zajec
#include <iostream>

bool checkPhoneNumber(int number)
{
    int numOfDigits = 0;

    while (number != 0)
    {
        number = number / 10;
        numOfDigits++;
    }
    if (numOfDigits == 8{
        return 1;
        }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 0;
    std::cout << "Podaj numer telefonu: ";
    std::cin >> number;
    std::cout << std::boolalpha << checkPhoneNumber(number);
}


//mg

bool checkString(std::string number)
{
    bool result = true;
    for (int i = 0; i < number.length(); ++i)
    {
        if (!(number[i] >= '0' && number[i] <= '9'))
        {
            result = false;
        }
    }
    return result;
}

int main()
{

    std::string number;
    std::cout << "Podaj number telefonu: " << std::endl;
    std::cin >> number;
    int numOfFigures = number.length();
    bool checkNum = checkString(number);

    if (numOfFigures == 8 && number[0] != '0' && checkNum == true)
    {
        std::cout << "Numer telefonu jest poprawny.";
    }
    else
    {
        std::cout << "Telefon jest błędny.";
    }
  