/*
9. Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести среднюю погрешность работы двух
датчиков.
*/

#include <iostream>
#include <ctime>
#include<array>

const int N = 2;

 struct Sensor
 {
     int min;
     int max;
     float error;
     int speed;
 };

 void MakeSensor(Sensor &sensor)
 {
     std::cout << "Enter min and max sensor values" << std::endl;
     std::cin >> sensor.min >> sensor.max;

     std::cout << "Enter error and max speed" << std::endl;
     std::cin >> sensor.error >> sensor.speed;
 }

 float ArifmeticMiddleError(std::array<Sensor, N> sensors)
 {
     float errors_sum = 0;
     for(int i = 0; i < N; i++)
         errors_sum += sensors[i].error;
     return errors_sum / N;
 }
int main()
{
    srand(time(0));

    std::array<Sensor, N> sensors;

    for(int i = 0; i < N; i++){
        std::cout << "Sensor #" << i + 1 << std::endl;
        MakeSensor(sensors[i]);
    }
    std::cout << "Middle error of sensors: " << ArifmeticMiddleError(sensors);

    return 0;
}
