//14. Создать новый массив из двух других массивов путём операций над элементами
//b. вычитания

#include <iostream>
#include <array>
#include<ctime>
int const N = 20;

void RandMas(std::array<int, N> & mas)
{
    for(int i = 0; i < N; i++)
        mas[i] = rand() % 21 - 10;
}
void ReadMas(std::array<int, N> &mas)
{
    std::cout << "\t\t\tMas  " << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << mas[i] << " ";
    std::cout << std::endl;
}

void MinusMas(std::array<int, N> &mas1, std::array<int, N> &mas2)
{
    for(int i = 0 ; i < N; i++)
        mas1[i] -= mas2[i];
}


int main()
{
    srand(time(0));
    std::array<int, N> mas1;
    std::array<int, N> mas2;
    std::cout << "First array" << std::endl;
    RandMas(mas1);
    ReadMas(mas1);

    std::cout << "Second array" << std::endl;
    RandMas(mas2);
    ReadMas(mas2);

    std::cout << "Result array" << std::endl;
    MinusMas(mas1, mas2);
    ReadMas(mas1);

    return 0;
}
