#include <iostream>
int main()
{
    int A;
    int x;
    int y;
    std::cout << "Введите значение числа A: ";
    std::cin >> A;
    std::cout << "A^2 = " << A * A << '\n';
    x = A * A;
    std::cout << "A^4 = " << x * x << '\n';
    x = x * x;
    std::cout << "A^8= " << x * x << '\n';
    return 0;
}