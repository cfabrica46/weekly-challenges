#include <iostream>
#include <string>

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        std::string result = "";
        if (i % 3 == 0)
            result += "Fizz";
        if (i % 5 == 0)
            result += "Buzz";
        if (result.empty())
            std::cout << i;
        else
            std::cout << result;
        std::cout << std::endl;
    }

    return 0;
}
