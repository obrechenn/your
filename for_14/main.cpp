#include <iostream>

int main()
{
    int n;
    std::cout<<"введите значение числа n: ";
    std::cin>>n;
    double summ = 0;
    int x = 1;
    for(double i = 1; i < n;i+= 0.1){
        summ += i * x;
        x *= -1;
    }
std::cout<<summ<<'\n';
    return 0;
}