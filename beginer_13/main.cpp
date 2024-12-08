#include <iostream>
#include <cmath>
double Square_Circle1(int R1)
{
    return (M_PI * (R1 * R1));
}
double Square_Circle2(int R2)
{
    return (M_PI * (R2 * R2));
}
double Square_Circle3(int R1, int R2)
{
    return (Square_Circle1(R1)-Square_Circle2(R2));
}
int main(){
    int R1;
    int R2;
    std::cout<<"Введите значение радиуса R1: ";
    std::cin >> R1;
    std::cout<<"Введите значение радиуса R2: ";
    std::cin >> R2;
    std::cout << "Площадь окружности с радиусом: " << R1 << " равна " << Square_Circle1(R1) << '\n';
    std::cout << "Площадь окружности с радиусом: " << R2 << " равна " << Square_Circle2(R2) << '\n';
    std::cout << "Площадь кольца равна: " << Square_Circle3(R1, R2) << '\n';
    return 0;
}