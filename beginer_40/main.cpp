#include <iostream>
int main()
{
    double a1;
    double a2;
    double b1;
    double b2;
    double c1;
    double c2;
    std::cout << "Введите значение переменной a1: ";
    std::cin >> a1;
    std::cout << "Введите значение переменной a2: ";
    std::cin >> a2;
    std::cout << "Введите значение переменной b1: ";
    std::cin >> b1;
    std::cout << "Введите значение переменной b2: ";
    std::cin >> b2;
    std::cout << "Введите значение переменной c1: ";
    std::cin >> c1;
    std::cout << "Введите значение переменной c2: ";
    std::cin >> c2;
    double d = a1 * b2 - a2 * b1;
    double x = (c1 * b2 - c2*b1)/d;
    double y = (a1 * c2 - a2 * c1) / d;
    std::cout << "x = " << x << '\n' << "y = " << y << '\n';
    return 0;
}