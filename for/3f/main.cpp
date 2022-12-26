/*
f) x - 2x + 3x....
*/

#include <iostream>

int main()
{
    int Ch, X;
    std::cout << "Enter Ch and X: " << std::endl;
    std::cin >> Ch >> X;

    float res = 0;
    float i = 1;
    short minus = 1;

    while(i <= Ch){
        res += minus * i * X;
        i += 1;
        minus *= -1;
    }

    std::cout << "Result is " << res;

    return 0;
}
