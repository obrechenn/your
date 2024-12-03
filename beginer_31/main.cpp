#include <iostream>
int TC(int TF){
    return (TF - 32)*5/9;
}
int main()
{
    int TF;
    std::cin>>TF;
    std::cout<<"Температура в грудсах по  F  равна "<<TF<<", тогда температура в градусах по C равна "<<TC(TF)<<'\n';
    return 0;
}