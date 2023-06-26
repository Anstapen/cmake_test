#include <iostream>
#include "custom_string/custom_string.h"
#include "custom_math/custom_math.h"
#include <string>

int main(void)
{
    std::cout << "Hello There" << std::endl;
    print();

    return custom_math::add(1, 2);
}