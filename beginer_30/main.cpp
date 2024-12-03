#include <iostream>
#include <cmath>
float aradian(int ag)
{   
return ((ag%360)/M_PI);
}
int main()
{
    int ag;
    std::cout<<"введите значение угла в градусах ag: ";
    std::cin>>ag;
    std::cout<< "Значение угла "<<ag<<" в радианах равно "<<aradian(ag) << '\n';
return 0;
}
