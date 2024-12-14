#include <iostream>
double pow(int x, int c)
{
    int res = 1;
    x = x-3;
    for(int i = 0;i < c;i++)
    {
        res = res * x;
    }
    return res;
}  
double y(int x)
{
    return ((4 * pow(x, 6)) - (7 * pow(x , 3)) + 2);
} 
int main()
{   
    int x;
    std::cout << "Введите значение числа  x: ";
    std::cin >> x;
    std::cout << "функция y равна: " << y(x) << '\n'; 
    return 0;
}