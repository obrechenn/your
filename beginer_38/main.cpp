#include <iostream>
int main()
{
    double a;
    double b;
    double x;
    std::cout << "Введите значение переменной a: ";
    std::cin >> a;
    std::cout << "Введите значение переменной b: ";
    std::cin >> b;
    x = (-b)/a;
    std::cout << "x = " << x << '\n';
    return 0;
}