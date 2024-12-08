#include <iostream>
#include <cmath>
double Summ(int a,int b)
{
return (abs(a) * abs(a)) + (abs(b) * abs(b));
}
double Difference(int a,int b)
{
return (abs(a) * abs(a)) - (abs(b) * abs(b)); 
}
double Product(int a,int b)
{
return (abs(a) * abs(a)) * (abs(b) * abs(b)); 
}
double Quotient(int a,int b)
{
return (abs(a) * abs(a)) / (abs(b) * abs(b)); 
}
int main()
{
    int a;
    int b;
    std::cout<<"Введите число a: ";
    std::cin >> a;
    std::cout<<"Введите число b: ";
    std::cin >> b;
    std::cout<< "Cумма модулей квадратов чисел " << a << " и " << b <<  " равна: " << Summ(a, b) << '\n';
    std::cout<< "Разность модулей квадратов чисел " << a << " и " << b <<  " равна: " << Difference(a, b) << '\n';
    std::cout<< "произведение модулей квадратов чисел " << a << " и " << b <<  " равно: " << Product(a, b) << '\n';
    std::cout<< "Кратное модулей квадратов чисел " << a << " и " << b <<  " равно: " << Quotient(a, b) << '\n';
    return 0; 
}