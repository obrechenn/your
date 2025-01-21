#include <iostream>
int main(){
    int a;
    std::cout<<"введите первое число : ";
    std::cin>> a;
    int b;
    std::cout<<"введите второе число: ";
    std::cin>> b;
    int chisla = 0;
    for(int i = a;i < b + 1;i++){
        chisla += i * i;
    }
    std::cout<<chisla<<'\n';
    return 0;
}   