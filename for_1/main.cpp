#include <iostream>
int main(){
    int n;
    std::cout<<"введите число повторений: ";
    std::cin>> n;
    int k;
    std::cout<<"введите число, которое будет повторяться: ";
    std::cin>> k;
    for(int i = 0; i < n;i++){
    std::cout<<k<<" ";
    }
    return 0;
}