#include <iostream>
int main(){
    int n;
    std::cout<<"введите первое число a: ";
    std::cin>> n;
    int k = 0;
    while (n != 1) {
        n = n / 2;
        k += 1; 
    }
    std::cout <<k<<'\n';
    return 0;
}
