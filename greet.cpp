#include "greet.h"

std::string getName(const std::string &name)
{
    std::string temp{""};
    for(const auto &chr : name)
    {
        if(std::isalpha(chr))
        {
            temp += chr;
        }
    }
    return temp;

}
std::string greet(const std::string &name)
{
    std::string greeting{""};


    std::string temp{getName(name)};

    if (temp == "")
    {
        greeting = "Hello, my friend.";

    }
    return greeting;
}