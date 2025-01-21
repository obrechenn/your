#include <iostream>
int main(){
    int n;
    std::cout<<"введите стоимость кг конфет: ";
    std::cin>> n;
    double summ = 0;
    double kg = 0;
    for(double i = 0; i < 11;i++){
        kg = kg+0.1;
        summ  = n*kg;
        std::cout<<kg<<" кг конфет стоит: "<< summ << '\n';
    }
    return 0;
}