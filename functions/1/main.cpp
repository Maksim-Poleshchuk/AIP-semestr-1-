/*
13. Описать процедуру TimeToHMS(T, H, M, S), определяющую по времени T (в
секундах) содержащееся в нем количество часов H, минут M и секунд S (T —
входной, H, M и S — выходные параметры целого типа). Используя эту процедуру,
найти количество часов, минут и секунд для пяти данных отрезков времени T1, T2,
. . ., T5.
*/
#include <iostream>

void TimeToHMS(int T)
{
    std::cout << "Hours: " << T / 3600 << std::endl;
    std::cout << "Minutes: " << (T - (T / 3600) * 3600) / 60 << std::endl;
    std::cout << "Secunds: " << T % 60 <<  std::endl;


}
int main()
{
    int T;
    for(int i = 0; i < 5; i++)
    {
        std::cin >> T;
        std::cout << "T" << i + 1 << std::endl;
        TimeToHMS(T);
    }
    return 0;
}
