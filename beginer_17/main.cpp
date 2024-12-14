#include <iostream>
#include <cmath>
double lenght_AC(int a, int c)
{
    return abs(a - c);
}
double lenght_BC(int b, int c)
{
    return abs(b - c);
}
double summ(int a, int b, int c)
{
    return (lenght_AC(a, c) + lenght_BC(b, c));
}
int main()
{
    int a;
    int b;
    int c;
    std::cout << "Введите координату точки  а: ";
    std::cin >>  a;
    std::cout << "Введите координату точки b: ";
    std::cin >> b;
    std::cout << "Введите координату точки c: ";
    std::cin >> c;
    std::cout << "Расстояние на координатной прямой между точкой " << a << " и точкой " << c << " равно " << lenght_AC(a, c) << '\n';
    std::cout << "Расстояние на координатной прямой между точкой " << b << " и точкой " << c << " равно " << lenght_BC(b, c) << '\n';
    std::cout << "Сумма отрезков ac и bc с числовыми значениями: " <<  lenght_AC(a, c) << " и " << lenght_BC(b, c) << " равна " << summ(a, b, c) << '\n';  
    return 0;
}