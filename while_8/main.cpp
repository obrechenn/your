#include <iostream>
int main(){
    int n;
    std::cout<<"введите первое число n: ";
    std::cin>> n;
    int k = 1;
    while (k * k < n) {
        k+=1;
    }
    std::cout <<k - 1<<'\n';
    return 0;
}
