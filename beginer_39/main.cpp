#include <iostream>
#include <cmath>
int main()
{
    double a;
    double b;
    double c;
    double x;
    double x1;
    double x2;
    std::cout << "Введите значение переменной a: ";
    std::cin >> a;
    std::cout << "Введите значение переменной b: ";
    std::cin >> b;
    std::cout << "Введите значение переменной c: ";
    std::cin >> c;
    x = (b * b) - (4 * a * c);
    x1 = ((-b) + sqrt(x)) / (2 * a);
    x2 = ((-b) - sqrt(x)) / (2 * a);
    if (x1 < x2)
    {
        std::cout << "x1 = " << x1 << '\n' << "x2 = " << x2 << '\n';
    }
    else
    {
        std::cout << "x2 = " << x2 << '\n' << "x1 = " << x1 << '\n';
    }
    return 0;
}