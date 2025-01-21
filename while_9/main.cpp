#include <iostream>
int pow(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; ++i) {
        res *= a;
    }
    return res;
}
int main(){
    int n;
    std::cout<<"введите первое число n: ";
    std::cin>> n;
    int k = 1;
    while (pow(3,k) < n) {
        k+=1;
    }
    std::cout <<k<<'\n';
    return 0;
}
