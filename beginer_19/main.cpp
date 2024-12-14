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
double perimetr(int x1, int x2, int y1, int y2)
{
    return ((a(x1, x2) + b(y1, y2)) * 2);
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
    std::cout << "Расстояние на координатной прямой между точкой " << x1 << " и точкой " << x1 << " равно " << a(x1, x2) << '\n';
    std::cout << "Расстояние на координатной прямой между точкой " << y1 << " и точкой " << y2 << " равно " << b(y1, y2) << '\n';
    std::cout << "Сумма отрезков ac и bc с числовыми значениями: " <<  a(x1, x2) << " и " << b(y1, y2) << " равна " << perimetr(x1,x2,y1,y2) << '\n';  
    return 0;
}