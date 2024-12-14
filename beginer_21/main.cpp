#include <iostream>
#include <cmath>
double lenght_AB(int x1, int x2, int y1, int y2)
{
    return sqrt(((x2 * x2) - 2 * x2 * x1 + (x1 * x1)) + ((y2 * y2) - 2 * y2 * y1 + (y1 * y1)));
}
double lenght_BC(int x2, int x3, int y2, int y3)
{
    return sqrt(((x3 * x3) - 2 * x3 * x2 + (x2 * x2)) + ((y3 * y3) - 2 * y3 * y2 + (y2 * y2)));
}
double lenght_CA(int x1, int x3, int y1, int y3)
{
    return sqrt(((x3 * x3) - 2 * x3 * x1 + (x1 * x1)) + ((y3 * y3) - 2 * y3 * y1 + (y1 * y1)));
}
double Perimetr(int x1, int x2, int x3, int y1, int y2, int y3)
{
    return (lenght_AB(x1,x2,y1,y2) + lenght_BC(x2,x3,y2,y3) + lenght_CA(x1,x3,y1,y3));
}
double half_Perimetr(int x1, int x2, int x3, int y1, int y2, int y3)
{
    return (Perimetr(x1,x2,x3,y1,y2,y3) / 2);
}
double Square1(int x1, int x2, int x3, int y1, int y2, int y3)
{
    return (half_Perimetr(x1,x2,x3,y1,y2,y3) * (half_Perimetr(x1,x2,x3,y1,y2,y3) - lenght_AB(x1,x2,y1,y2)));
}
double Square2(int x1, int x2, int x3, int y1, int y2, int y3)
{
    return (sqrt(Square1(x1,x2,x3,y1,y2,y3) * (half_Perimetr(x1,x2,x3,y1,y2,y3) - lenght_BC(x2,x3,y2,y3)) * (half_Perimetr(x1,x2,x3,y1,y2,y3) - lenght_CA(x1,x3,y1,y3))));
}
int main()
{
    int x1;
    int x2;
    int y1;
    int x3;
    int y2;
    int y3;
    std::cout << "Введите координату точки  x1: ";
    std::cin >>  x1;
    std::cout << "Введите координату точки x2: ";
    std::cin >> x2;
    std::cout << "Введите координату точки y1: ";
    std::cin >> y1;
    std::cout << "Введите координату точки  x3: ";
    std::cin >>  x3;
    std::cout << "Введите координату точки y2: ";
    std::cin >> y2;
    std::cout << "Введите координату точки y3: ";
    std::cin >> y3;
    std::cout << "Периметр треугольника со сторонами: " << '\n';
    std::cout << lenght_AB(x1,x2,y1,y2) << ", " << lenght_BC(x2,x3,y2,y3) << ", " << lenght_CA(x1,x3,y1,y3) << " равен " << Perimetr(x1,x2,x3,y1,y2,y3)<< '\n';
    std::cout << "Площадь треугольника со сторонами: " << '\n';  
    std::cout << lenght_AB(x1,x2,y1,y2) << ", " << lenght_BC(x2,x3,y2,y3) << ", " << lenght_CA(x1,x3,y1,y3) << " равна " << Square2(x1,x2,x3,y1,y2,y3)<< '\n';
    
    return 0;
}