#include <iostream>

int main()
{
    int n;
    std::cout<<"введите значение числа n: ";
    std::cin>>n;
    double summ = 0;
    for(double i = 1; i < n;i++){
        i -= 0.9;
        summ += i -(i+0.1)+(i+0.2);
    }
std::cout<<summ<<'\n';
    return 0;
}