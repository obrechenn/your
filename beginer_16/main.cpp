#include <iostream>
#include <cmath>
double koordynaty(int x1, int x2)
{
    return abs(x1 - x2);
}
int main()
{
    int x1;
    int x2;
    std::cout<<"Введите координату x1: ";
    std::cin >>  x1;
    std::cout<<"Введите координату x2: ";
    std::cin>> x2;
    std::cout << "Расстояние на координатной прямой между точкой "<<x1<<" и "<<x2<<" равно " << koordynaty(x1, x2) << '\n';
    return 0;
}