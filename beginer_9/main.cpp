#include <iostream>
#include <cmath>
double Average_Geometric(int a,int b)
{
return sqrt(a * b); 
}
int main()
{
    int a;
    int b;
    std::cout<<"Введите число a: ";
    std::cin >> a;
    std::cout<<"Введите число b: ";
    std::cin >> b;
    std::cout<< "Среднее геометрическое чисел " << a << " и " << b <<  " равно: " << Average_Geometric(a, b) << '\n';
    return 0; 
}