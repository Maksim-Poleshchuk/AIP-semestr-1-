/*
1. Создайте структуру, которая хранит время: часы, минуты, секунды.
d. Написать функцию, которая возвращает количество минут в заданной
переменной типа «время».
*/

#include <iostream>

struct Time
{
    int hours;
    short minutes;
    short secunds;
};

void makeTime(Time &time, int hours, short minutes, short secunds)
{
    time.hours = hours;
    time.minutes = minutes;
    time.secunds = secunds;
}
short ReturnMinutes(Time &time)
{
    return time.minutes;
}
int main()
{
    Time moment;
    makeTime(moment, 1, 10, 45);
    std::cout << "Struct has " << ReturnMinutes(moment) << " minutes" << std::endl;

    return 0;
}
