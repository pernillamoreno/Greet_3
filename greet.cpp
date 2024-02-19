#include <vector>
#include "greet.h"
#include <iostream>

constexpr char const *HELLO_U{"HELLO, "};
constexpr char const *HELLO_L{"Hello, "};
constexpr char const *HELLO_MY_FRIEND{"Hello, my friend."};

static std::string greeting;
static bool isUpper(const std::string &string)
{
    bool upper{true};
    for (const auto &chr : string)
    {
        if (std::islower(chr))
        {
            upper = false;
            break;
        }
    }
    return upper;
}

static std::vector<std::string> extractNames(const std::string &string)
{
    std::vector<std::string> names;

    std::string name{""};
    for (const auto &chr : string)
    {
        if (std::isalpha(chr))
        {
            name += chr;
        }
        else if (chr == ',') // if chr is a commma it is end of a name
        {
            if (name != "") // if name is not empty we push to the vector and we clear name
            {
                names.push_back(name);
                name = "";
            }
           
        }
        else
        {
            ;
        }
    }
    if (name != "")
    {
        names.push_back(name);
    }
    return names;
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
    std::vector<std::string> names{extractNames(name)};

    if (0 == names.size()) // if 0 its no name and HELLO_MY_FRIEND will bw returned
    {
        // greeting = "Hello, my friend.";
        // change to contexpr
        greeting = HELLO_MY_FRIEND;
    }
    else
    {
        if (1 == names.size())
        {
            if (isUpper(names[0]))
            {
                greeting = HELLO_U + names[0] + "!";
            }
            else
            {
                greeting = HELLO_L + names[0] + ".";
            }
        }
        else
        {
            greeting = HELLO_L + names[0] + " and " + names[1] + ".";
        }

    }
    return greeting;
}