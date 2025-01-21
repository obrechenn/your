#include <iostream>
int main(){
    int a;
    std::cout<<"введите первое число a: ";
    std::cin>> a;
    int b;
    std::cout<<"введите второе число b: ";
    std::cin>> b;
    int summ = 0;
    while(a > b - 1){
        a -= b;
        summ += 1;
    }
    std::cout<<"остаток от деления a на b равен: "<<a<<'\n'<<"частное от деления нацело a на b равно: "<<summ<<'\n';
    return 0;
}
