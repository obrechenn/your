#include <iostream>
double s(double a, double x)//s=stoimost za kg konfet
{
    return (a/x);
}
double ys(double y,double b)//y=stoimost kg irisok
{
    return (b/y);
}
double kratnoe(double a ,double x , double b, double y)
{
    return s(a, x)/ ys(y, b);
}
int main()
{
    int y; 
    int x;
    int a;
    int b;
    std::cout<<"введите значение x(кол-во кг конфет): ";
    std::cin>>x;
    std::cout<<"введите значение a(cтоимость x кг конфет): ";
    std::cin>>a;
    std::cout<<"введите значение y(кол-во кг ирисок): ";
    std::cin>>y;
    std::cout<<"введите значение b(стоимость y кг ирисок): ";
    std::cin>>b;
    std::cout<<"кг конфет стоит: "<<s(a, x)<<'\n'<<"а кг ирисок стоит: "<<ys(y, b)<<'\n'<<"кг конфет стоит в "<<kratnoe(a,x,b,y)<<" раз больше кг ирисок "<<'\n';
    return 0;
}