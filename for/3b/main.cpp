/*
b) y = 1/x + 1/2x + 1/3x ....
*/

#include <iostream>

int main()
{
    int Ch, X;
    std::cout << "Enter Ch and X: " << std::endl;
    std::cin >> Ch >> X;

    float res = 0;
    float i = 1;

    while(i <= Ch){
        res += 1/(i * X);
        i += 1;
    }

    std::cout << "Result is " << res;

    return 0;
}


