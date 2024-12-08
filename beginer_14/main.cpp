#include <iostream>
#include <cmath>
double R_Circle(double l)
{
    return (l / (2 * M_PI));
}
double Square_Circle(int R)
{
    return (M_PI * (R * R));
}
int main(){
    int l;
    int R;
    std::cout<<"Введите значение длины окружности l: ";
    std::cin >> l;
    std::cout << "Радиус окружности с длиной: " << l << " равен " << R_Circle(l) << '\n';
    std::cout << "Площадь окружности с радиусом : " << R_Circle(l) << " равна " << Square_Circle(R) << '\n';
    return 0;
}