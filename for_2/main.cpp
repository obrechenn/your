#include <iostream>
int main(){
    int a;
    std::cout<<"введите первое число : ";
    std::cin>> a;
    int b;
    std::cout<<"введите второе число: ";
    std::cin>> b;
    int raznitsa = b - a;//целые числа между а и b
    int chisla = 0;
    for(int i = a + 1;i < b;i++){
        chisla = i;
        std::cout<<chisla<<" ";
    }
    std::cout<<'\n'<<raznitsa - 1<<'\n';
    return 0;
}   