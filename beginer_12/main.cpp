#include <iostream>
#include <cmath>
double c(int a, int b)//c - гипотенуза
{
    return sqrt((a * a) + (b * b));
}
double perimetr(int a, int b)
{
    return (a + b + c(a, b));
}
int main()
{
    int a;
    int b;
    std::cout<<"Введите число a: ";
    std::cin >> a;
    std::cout<<"Введите число b: ";
    std::cin >> b;
    std::cout<< "Гипотенуза прямоугольного треугольника с катетами " << a << " и " << b <<  " равна: " << c(a, b) << '\n';
    std::cout<< "Периметр прямоугольного треугольника со сторонами " << a << " , " << b << " , " << c(a, b) << " равна: " << perimetr(a, b) << '\n';
    return 0;
}