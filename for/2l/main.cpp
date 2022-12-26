#include<cmath>
#include <iostream>
/*
l) y = sqrt(5x + 4x^3) + 4x + 3/sin(9x + 71)
*/

float func(float x)
{
    float y = sqrt(5*x + 4*x*x*x) + 4*x + 3/sin(9*x + 71);
    return y;
}
int main()
{
    float top, x, end;
    std::cout << "Enter shag, start diapozon, end diapozon" << std::endl;
    std::cin >> top >> x >> end;

    for(; x <= end; x += top)
        std::cout << x << "\t" << func(x) << std::endl;

    return 0;
}
