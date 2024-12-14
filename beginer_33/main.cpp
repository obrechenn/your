#include <iostream>
int s(int a, int x)//s=stoimost za kg
{
    return (a/x);
}
int ys(int y,int a, int x)//y=kolvo kg
{
    return ((s(a, x)) * y);
}
int main()
{
    int y; 
    int x;
    int a;
    std::cout<<"введите значение x(кол-во кг конфет): ";
    std::cin>>x;
    std::cout<<"введите значение a(cтоимость x кг конфет): ";
    std::cin>>a;
    std::cout<<"введите значение y(нужное кол-во кг конфет): ";
    std::cin>>y;
    std::cout<<"кг конфет стоит: "<<s(a, x)<<'\n'<<"а "<<y<<" кг этих же конфет стоит: "<<ys(a, x, y)<<'\n';
    return 0;
}