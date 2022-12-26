//8. Посчитать количество положительных/отрицательных элементов массива

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

int CountPlus(std::array<int, N> &mas)
{   int count = 0;
    for(int i = 0; i < N; i++)
        if (mas[i] > 0)
            count++;
    return count;
}

int CountMinus(std::array<int, N> &mas)
{   int count = 0;
    for(int i = 0; i < N; i++)
        if (mas[i] < 0)
            count++;
    return count;
}

int main()
{
    srand(time(0));
    std::array<int, N> mas;
    RandMas(mas);
    ReadMas(mas);
    std::cout << "Count of plus and minus numbers" << std::endl;
    std::cout << CountPlus(mas) << ", " << CountMinus(mas) << std::endl;


    return 0;
}
