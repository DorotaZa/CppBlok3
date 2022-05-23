// Zad.2.4.1.
//Including regex

#include <iostream>
#include <regex>

bool ifValid( std::string phoneNumber)
{
    const std::regex pattern("{1-9}{7}");

    if (std::regex_match(phoneNumber, pattern))
    {
        return true;
    }
    else
    {
        return false;
 
    }
}

int main()
{

    std::string phoneNumber = {};
    std::cout << "Enter your phone number: " << std::endl;
    std::cin >> phoneNumber;
    std::cout << ifValid(phoneNumber);
    
}
