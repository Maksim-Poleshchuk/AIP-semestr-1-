//2. Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
//мнимая части. Объявите два числа и получите их значения от пользователя.
//b. Напишите функцию, которая будет возвращать комплексно-сопряжённое число.

#include <iostream>

struct Complex
{
    int imag;
    int real;
};

void MakeComplex(Complex &num)
{
    std::cout << "Enter reality and imagine parts of number" << std::endl;
    std::cin >> num.real >> num.imag;
}

void ViewComplex(Complex &num)
{
    std::cout << "complex number is " << std::endl;
    if(num.imag >= 0)
        std::cout << num.real << " + " << num.imag << " i" <<  std::endl;
    else
        std::cout << num.real << " - " << num.imag * (-1) << " i" <<  std::endl;
}

void SoprComplex(Complex &num)
{
    num.imag *= -1;
}

int main()
{
    Complex num1, num2;
    MakeComplex(num1);
    MakeComplex(num2);

    ViewComplex(num1);
    SoprComplex(num1);
    ViewComplex(num1);
    return 0;
}
