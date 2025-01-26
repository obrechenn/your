
#include <iostream>

int main()
{
    int n;
    std::cout<<"введите значение числа n: ";
    std::cin>>n;
    int summ = 0;
    for(int i = 1; summ <= (2*n)*(2*n);++i){
        summ += (i + n)*(i+n);
    }
std::cout<<summ<<'\n';
    return 0;
}