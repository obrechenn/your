#include <iostream>
int pow(int x, int c)
{
    int res = 1;
    for(int i = 0;i < c;i++)
    {
        res = res * x;
    }
    
return res; 
}
int y(int x)//y = функция
{
    return 3*(pow(x, 6))-6*(pow(x, 2))-7;
}
int main()
{
    int x;
    std::cout<<"введите значение x: ";
    std::cin>>x;
    std::cout<<"функция у равна: "<<y(x)<< '\n';
    return 0;
}