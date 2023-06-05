#include <iostream>

#include "Builder.h"
int main()
{
    Builder<char> builder;
    builder.append("Hello").insert(5, " World!").insert(6, "My").append("Friend");
    std::string str = builder.to_string();
    std::cout << str << std::endl; // виведе "Hello World!"
    return 0;
}