#include <iostream>

int main(){
    int n;
    std::cout<<" введите число n: ";
    std::cin>>n;
    int k = 1;
    double summ = 1.0;
    while(summ <= n){
        k++;
        summ += 1.0/k;
    }
    std::cout<<k;
    return 0;
}