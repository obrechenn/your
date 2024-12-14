#include <iostream>
#include <cmath>
double length_Circle(int d) 
{
    return M_PI*d;
}
int main() 
{
    int d;
    std::cout<<"введите диаметр окружности: ";
    std::cin>>d;
    std::cout<<"длина окружности с диаметром "<<d<<" равна "<<length_Circle(d)<<'\n';
    return 0;
}