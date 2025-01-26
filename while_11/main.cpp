#include <iostream>

int main(){
    int n;
    std::cout<<" введите число n: ";
    std::cin>>n;
    int k = 1;
    int summ = 0;
    while(summ < n){
        summ += k + (k-1);
        k++;
    }
    std::cout<<k;
    return 0;
}
