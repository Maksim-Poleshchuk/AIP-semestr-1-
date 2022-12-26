/*
10. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной
четверти, в которой находится точка с ненулевыми вещественными координатами
(x, y). С помощью этой функции найти номера координатных четвертей для трех
точек с данными ненулевыми координатами.
*/

#include <iostream>

short Quarter(int x, int y)
{
    short res;
    if (x > 0 && y > 0)
        res = 1;
    else if(x < 0 && y > 0)
        res = 2;
    else if (x < 0 && y < 0)
        res = 3;
    else if(x > 0 && y < 0)
        res = 4;
    else
        res = 0;
    return res;
}

int main()
{
    int x, y;
    std::cout << "Enter x, y: " << std::endl;
    for(int i = 0; i < 3; i++)
    {
        std::cin >> x >> y;
        if (Quarter(x, y) == 0)
            std::cout << "Point on cordinate axis" << std::endl;
        else
            std::cout << "Cordinate Quarter number " << Quarter(x, y);
    }
    return 0;
}
