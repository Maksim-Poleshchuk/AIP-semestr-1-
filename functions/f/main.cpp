/*
y = 2x^2 + 10, если x > 5
y = 0, если x = 0
y = 2 * |x+6| - x^2, если x < 5
*/

#include <iostream>
float MathFunc(float x)
{
    float y;
    if(x == 0)
        y = 0;
    else if(x > 5)
        y = 2 * x * x + 10;
    else if(x < 5)
        y = 2 * std::abs(x + 6) - x * x;
    return y;
}

int main()
{
    std::cout << "    Function tabbuling" << std::endl;
    for(int x = -5; x < 5; x++)
        std::cout << "\t" <<  x << "\t" << MathFunc(x) << std::endl;

    return 0;
}
