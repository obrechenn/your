#include <iostream>
int main(){
    int n;
    std::cout<<"введите первое число a: ";
    std::cin>> n;
    int fakt = 1;
    while (n > 0) {
        fakt *= n;
        n -= 2;
    }
    std::cout <<fakt<<'\n';
    return 0;
}
