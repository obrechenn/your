#include <iostream>
int main(){
    int k = 0;
    int p;
    std::cout<<" введите ставку вклада в % : ";
    std::cin>>p;
    double vklad = 1000;
    while(vklad< 1100){
        vklad += vklad/100 * p;
        k++;
    }
    std::cout<<"сумма вклада через "<<k<< " месяцев, будет равна " << vklad << '\n';
    return 0;
}