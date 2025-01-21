#include <iostream>
int main(){
    int a;
    std::cout<<"введите первое число a: ";
    std::cin>> a;
    int b;
    std::cout<<"введите второе число b: ";
    std::cin>> b;
    while(a > b - 1){
        
        a -= b;
    }
    std::cout<<'\n'<<a<<'\n';
    return 0;
}
