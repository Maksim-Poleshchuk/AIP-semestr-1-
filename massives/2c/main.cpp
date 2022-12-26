/*
2. Вычислить сумму элементов массива:
c. меньших 5, больших 6, меньших 4,
*/

#include <iostream>
#include <array>
#include<ctime>
int const N = 20;

void RandMas(std::array<int, N> & mas)
{
    for(int i = 0; i < N; i++)
        mas[i] = rand() % 21;
}
void ReadMas(std::array<int, N> &mas)
{
    std::cout << "\t\t\tMas  " << std::endl;
    for(int i = 0; i < N; i++)
        std::cout << mas[i] << " ";
    std::cout << std::endl;
}

int SumMas5(std::array<int, N> &mas)
{
    int sum = 0;
    for(int i = 0; i < N; i++){
        if (mas[i] < 5)
            sum += mas[i];
    }
    return sum;
}

int SumMas6(std::array<int, N> &mas)
{
    int sum = 0;
    for(int i = 0; i < N; i++){
        if (mas[i] > 5)
            sum += mas[i];
    }
    return sum;
}

int SumMas4(std::array<int, N> &mas)
{
    int sum = 0;
    for(int i = 0; i < N; i++){
        if (mas[i] < 5)
            sum += mas[i];
    }
    return sum;
}


int main()
{
    srand(time(0));
    std::array<int, N> mas;
    RandMas(mas);
    ReadMas(mas);
    std::cout << "Sums" << std::endl;
    std::cout << SumMas5(mas) << ", " << SumMas6(mas) << ", " << SumMas4(mas) << std::endl;

    return 0;
}
