/*
h) y = x - x^3/3! + x^5/5! ....
*/

#include <iostream>
#include<cmath>

unsigned int factorial(unsigned int n)
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

int main()
{
    int Ch, X;
    std::cout << "Enter Ch and X: " << std::endl;
    std::cin >> Ch >> X;

    float res = X;
    int i = 3;
    short minus = -1;

    while(i <= Ch){
        res += float(minus * pow(X, i))/factorial(i);
        i += 2;
        minus *= -1;
    }

    std::cout << "Result is " << res;

    return 0;
}
