#include <iostream>
#include <cmath>
double l(int d) 
{
return M_PI*d;
}
int main() 
{
    int d;
    std::cout<<"введите диаметр окружности: ";
    std::cin>>d;
    std::cout<<"длина окружности с диаметром "<<d<<" равна "<<l(d)<<'\n';
return 0;
}