#include <iostream>

int main()
{
    int n;
    std::cout<<"введите значение числа n: ";
    std::cin>>n;
    double summ = 1;
    for(double i = 1.1; i < n;i += 0.1){
        summ *= i;
    }
std::cout<<summ<<'\n';
    return 0;
}