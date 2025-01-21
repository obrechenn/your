#include <iostream>
int main(){
    int n;
    std::cout<<"введите стоимость кг конфет: ";
    std::cin>> n;
    int summ = 0;
    for(int i = 1; i < 11;i++){
    summ  += n;
    std::cout<<i<<" кг конфет стоит: "<< summ << '\n';
    }
    return 0;
}