#include <iostream>
#include <cmath>
double a(int x1, int x2)
{
    return abs(x1 - x2);
}
double b(int y1, int y2)
{
    return abs(y1 - y2);
}
double lenght(int x1, int x2, int y1, int y2)
{
    return sqrt(((x2 * x2) - 2 * x2 * x1 + (x1 * x1)) + ((y2 * y2) - 2 * y2 * y1 + (y1 * y1)));
}
int main()
{
    int x1;
    int x2;
    int y1;
    int y2;
    std::cout << "Введите координату точки  x1: ";
    std::cin >>  x1;
    std::cout << "Введите координату точки x2: ";
    std::cin >> x2;
    std::cout << "Введите координату точки y1: ";
    std::cin >> y1;
    std::cout << "Введите координату точки y2: ";
    std::cin >> y2;
    std::cout << "Расстояние между отрезками с числовыми значениями: " <<  a(x1, x2) << " и " << b(y1, y2) << " равна " << lenght(x1,x2,y1,y2) << '\n';  
    return 0;
}