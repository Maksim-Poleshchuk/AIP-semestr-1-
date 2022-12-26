//4. Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом тяжёлом роботе

#include <iostream>
#include<array>
#include<ctime>

const int  N = 10;

struct Robot
{
    int gabarits;
    int weight;
    int speed;
};

void MakeRobot(Robot &bot)
{
    bot.gabarits = rand() % 100;
    bot.weight = rand() % 1200;
    bot.speed = 20 + rand() % 120;
}

void ViewRobot(Robot &bot)
{
    std::cout << "\t<Robot info>" << std::endl;
    std::cout << "Gabarits: " << bot.gabarits << "\tWeight: " << bot.weight << "\n\tSpeed: " << bot.speed << std::endl;
}
Robot WeightestBot(std::array<Robot, N> army)
{
    Robot control;
    control.weight = 0;
    for(int i = 0; i < N; i++)
        if (army[i].weight > control.weight)
            control = army[i];
    return control;
}
int main()
{
    srand(time(0));
    std::array<Robot, N> army;

    for(int i = 0; i < N; i++)
        MakeRobot(army[i]);

    Robot cool_robot = WeightestBot(army);
    ViewRobot(cool_robot);
    return 0;
}
