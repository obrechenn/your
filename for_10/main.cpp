#include <iostream>
int main(){
    int n;
    std::cout<<"введите число n: ";
    std::cin>> n;
    double chisla = 0;
    for(double i = 1;i < n + 1;i++){
        chisla += 1/i;
    }
    std::cout<<chisla<<'\n';
    return 0;
}   