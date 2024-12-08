#include <iostream>
#include <cmath>
double Diametr_Circle(double s)
{
    return sqrt((s * 4) / M_PI);
}
double lenght_Circle(int s)
{
    return (M_PI * Diametr_Circle(s));
}
int main(){
    int s;
    std::cout<<"Введите значение площади окружности: ";
    std::cin >>  s;
    std::cout << "Диаметр окружности с площадью: " <<  s << " равен " << Diametr_Circle(s) << '\n';
    std::cout << "Длина окружности с диаметром: " << Diametr_Circle(s) << " равна " << lenght_Circle(s) << '\n';
    return 0;
}