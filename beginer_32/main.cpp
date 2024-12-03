#include <iostream>
float TF(int TC)
{
    return ((TC*9)/5+32);
}
int main()
{
    int TC;
    std::cout<<"введите значение грaдусов Цельсия: ";
    std::cin>>TC;
    std::cout<<"Температура в грудсах  Цельсия  равна "<<TC<<", тогда температура в градусах по Фаренгейту равна "<<TF(TC)<<'\n';
    return 0;
}