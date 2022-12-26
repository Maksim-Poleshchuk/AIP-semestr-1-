//11. Вывести элементы массива, меньших среднего арифметического

//7. Найти среднее арифметическое положительных/отрицательных

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

float Middle(std::array<int, N> &mas)
{   int count = 0;
    float sum = 0;
    for(int i = 0; i < N; i++){
            count++;
            sum += mas[i];
    }
    return sum/count;
}

void Viewlittle(std::array<int, N> &mas)
{
    float middle = Middle(mas);
    std::cout << "Elements < Middle Arifmetic" << std::endl;
    for(int i = 0; i < N; i++){
        if (mas[i] < middle)
            std::cout << mas[i] << ", ";
    }
}

int main()
{
    srand(time(0));
    std::array<int, N> mas;
    RandMas(mas);
    ReadMas(mas);
    Viewlittle(mas);
    return 0;
}
