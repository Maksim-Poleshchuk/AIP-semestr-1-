/*
20. Имеется информация об N членах спортивной секции: фамилия, возраст, рост.
Ввести информацию о каждом.
a. Напечатать фамилию самого высокого.
b. Напечатать фамилии и возраст чей возраст выше среднего.
c. Напечатать информацию о тех чей возраст ниже среднего, а рост выше
среднего по секции.
*/

#include <iostream>
#include<array>
#include<string>

const int N = 5;

struct Sportman{
    std::string surname;
    short age;
    short height;
};

void MadeStruct(Sportman &man)
{
    std::cout << std::endl;

    std::cout << "Enter surname of person" << std::endl;
    std::cin >> man.surname;
    std::cout << std::endl;

    std::cout << "Enter age of person" << std::endl;
    std::cin >> man.age;
    std::cout << std::endl;

    std::cout << "Enter height of person" << std::endl;
    std::cin >> man.height;
    std::cout << std::endl;
}

std::string TallMan(std::array<Sportman, N> mas){
    short tall = 0;
    std::string surname;
    for(int i = 0; i < N; i++){
        if (mas[i].height > tall){
            tall = mas[i].height;
            surname = mas[i].surname;
        }
    }
    return surname;
}

float MiddleAge(std::array<Sportman, N> mas){
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += mas[i].age;
    }
    return sum/N;
}

float MiddleHeight(std::array<Sportman, N> mas){
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += mas[i].height;
    }
    return sum/N;
}


void ViewInfoB(std::array<Sportman, N> mas)
{
    float middle = MiddleAge(mas);
    for(int i = 0; i < N; i++){
        if(mas[i].age > middle){
            std::cout<<mas[i].surname << "\t Age: " << mas[i].age << std::endl;
        }
    }
}

void ViewInfoC(std::array<Sportman, N> mas)
{
    float middle_age = MiddleAge(mas);
    float middle_height = MiddleHeight(mas);
    for(int i = 0; i < N; i++){
        if(mas[i].age < middle_age && mas[i].height > middle_height){
            std::cout<< mas[i].surname << "\t Age: " << mas[i].age << std::endl;
            std::cout << "Height: " << mas[i].height << std::endl;
        }
    }
}



int main()
{
    std::array<Sportman, N> mas;

    for(int i = 0; i < N; i++){
        std::cout << "Sportman #" << i + 1 << std::endl;
        MadeStruct(mas[i]);
    }
    std::cout << "Surname of the tallest man: " << TallMan(mas) << std::endl;

    ViewInfoB(mas);

    std::cout << std::endl;
    std::cout <<"Info of people on diapozon criteries" << std::endl;
    ViewInfoC(mas);
    return 0;
}
