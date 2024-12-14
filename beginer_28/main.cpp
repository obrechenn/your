#include <iostream>
int main()
{
    int A;
    int x;
    int y;
    std::cout << "Введите значение числа A: ";
    std::cin >> A;
    std::cout << "A^2 = " << A * A << '\n';
    y = A;
    x = A * A;
    std::cout << "A^3 = " << y * x << '\n';
    x = x * x;
    std::cout << "A^5 = " << x * y << '\n';
    x = x * x;
    std::cout << "A^10 = " << x * y * y << '\n';
    x = x * x;
    std::cout << "A^15 = " << x / y << '\n'; 
    return 0;
}