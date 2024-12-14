#include <iostream>
#include <cmath>
float ag(int aradian)
{   
return (aradian * M_PI);
}
int main()
{
    int aradian;
    std::cout<<"введите значение угла в радианах aradian = ";
    std::cin>>aradian;
    std::cout<< "Значение угла "<<aradian<<" в градусах равно "<<ag(aradian) << '\n';
return 0;
}
