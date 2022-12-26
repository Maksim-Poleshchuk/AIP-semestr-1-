/*
4. Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y (X и Y
— вещественные параметры, являющиеся одновременно входными и выходными).
С ее помощью для данных переменных A, B, C, D последовательно поменять
содержимое следующих пар: A и B, C и D, B и C и вывести новые значения A, B, C,
D.
*/

#include <iostream>

void Swap(float &X, float &Y)
{
    float temp = X;
    X = Y;
    Y = temp;
}
int main()
{
    float A, B, C, D;
    std::cout << "Enter A, B, C, D: ";
    std::cin >> A >> B >> C >> D;

    Swap(A, B);
    Swap(C, D);
    Swap(B, C);

    std::cout << "A: " << A << " B: " << B << std::endl
              << "C: " << C << " D: " << D << std::endl;
    return 0;
}
