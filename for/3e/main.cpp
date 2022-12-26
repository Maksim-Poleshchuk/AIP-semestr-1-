/*
e) y = -1/(7x) + 2/(8x) - 3/(9x) ....
*/

#include <iostream>

int main()
{
    int Ch, X;
    std::cout << "Enter Ch and X: " << std::endl;
    std::cin >> Ch >> X;

    float res = 0;
    float i = 1;
    short minus = -1;

    while(i + 6 <= Ch){
        res += i/(minus * (i + 6) * X);
        i += 1;
        minus *= -1;
    }

    std::cout << "Result is " << res;

    return 0;
}
