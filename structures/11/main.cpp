//1. Робот-автомобиль описывается как структура с полями: скорость, длительность
//движения и номер. Напишите функцию для расчёта пройденного расстояния.

#include <iostream>

struct Robot
{
    short number;
    float speed;
    int time;
    float distanse;
};

void MakeRobot(Robot &bot, short number, float speed, int time)
{
    bot.number = number;
    bot.speed = speed;
    bot.time = time;
}
void DistanseArifmetic(Robot &bot)
{
    bot.distanse =  bot.speed * bot.time;
}
void ViewDistanse(Robot bot)
{
    std::cout << "Robot #" << bot.number << " distanse is " << bot.distanse << std::endl;
}
int main()
{
    Robot Boby;

    MakeRobot(Boby, 1, 140.5, 100);
    DistanseArifmetic(Boby);
    ViewDistanse(Boby);
    return 0;
}
