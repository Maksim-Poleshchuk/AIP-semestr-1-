/*
1. Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь
*/

#include <iostream>


int main()
{
    int H;
    std::cin >> H;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < i + 1; j++)
            std::cout << "0";
        std::cout << std::endl;
    }

    return 0;
}
