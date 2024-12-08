#include <iostream>
float Average_Arithmetics(float a, float b)
{
return ((a + b) / 2);
}
int main()
{
    int a;
    int b;
    std::cout<<"Введите число a: ";
    std::cin >> a;
    std::cout<<"Введите число b: ";
    std::cin >> b;
    std::cout<<"Среднее арифметическое чисел "<< a <<" и "<< b << " равно: " << Average_Arithmetics(a, b) << '\n';
    return 0;
}