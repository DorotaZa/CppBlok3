// 1.1 Max z array

#include <iostream>

int main()
{
    const int size = 3;
    int numbers[size] = { -2,-15,-5 };
    int max = 0;

    for (int i = 1; i < size; ++i)
    {
        if (numbers[i] > numbers[max])
        {
            max = i;
        }

    }
    std::cout << "Max number is: " << numbers[max];
}

