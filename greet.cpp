#include <vector>
#include "greet.h"
#include <iostream>


constexpr char const *HELLO_U{"HELLO "};
constexpr char const *HELLO_L{"Hello, "};
constexpr char const *HELLO_MY_FRIEND{"Hello, my friend."};

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
       // greeting = "Hello, my friend.";
       //change to contexpr 
       greeting = HELLO_MY_FRIEND;

    }
    else
    {
        //greeting = "Hello, " + temp + ".";
        greeting = HELLO_L + temp + ".";
    }
    return greeting;
}