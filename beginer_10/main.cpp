#include <iostream>
#include <cmath>
double Summ(int a,int b)
{
return (a * a) + (b * b); 
}
double Difference(int a,int b)
{
return (a * a) - (b * b); 
}
double Product(int a,int b)
{
return (a * a) * (b * b); 
}
double Quotient(int a,int b)
{
return (a * a) / (b * b); 
}
int main()
{
    int a;
    int b;
    std::cout<<"Введите число a: ";
    std::cin >> a;
    std::cout<<"Введите число b: ";
    std::cin >> b;
    std::cout<< "Cумма квадратов чисел " << a << " и " << b <<  " равна: " << Summ(a, b) << '\n';
    std::cout<< "Разность квадратов чисел " << a << " и " << b <<  " равна: " << Difference(a, b) << '\n';
    std::cout<< "произведение квадратов чисел " << a << " и " << b <<  " равно: " << Product(a, b) << '\n';
    std::cout<< "Кратное квадратов чисел " << a << " и " << b <<  " равно: " << Quotient(a, b) << '\n';
    return 0; 
}