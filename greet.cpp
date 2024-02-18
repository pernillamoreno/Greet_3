#include <vector>
#include "greet.h"
#include <iostream>

constexpr char const *HELLO_U{"HELLO, "};
constexpr char const *HELLO_L{"Hello, "};
constexpr char const *HELLO_MY_FRIEND{"Hello, my friend."};

bool isUpper(const std::string &name)
{
    bool upper{true};
    for (const auto &chr : name)
    {
        if (std::islower(chr))
        {
            upper = false;
            break;
        }
    }
    return upper;
}

std::string getName(const std::string &name)
{
    std::string temp{""};
    for (const auto &chr : name)
    {
        if (std::isalpha(chr))
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
        // greeting = "Hello, my friend.";
        // change to contexpr
        greeting = HELLO_MY_FRIEND;
    }
    else
    {
        if (isUpper(temp))
        {
            // greeting = "Hello, " + temp + ".";
            greeting = HELLO_U + temp + "!";
        }
        else

        {
            greeting = HELLO_L + temp + ".";
        }
    }
    return greeting;
}