#include <iostream>
int main(){
    int n;
    std::cout<<"введите стоимость кг конфет: ";
    std::cin>> n;
    float summ = 0;
    float kg = 1;
    for(float i = 1; i < 6;i++){
        kg = kg+0.2;
        summ  = n*kg;
        std::cout<<kg<<" кг конфет стоит: "<< summ << '\n';
    }
    return 0;
}