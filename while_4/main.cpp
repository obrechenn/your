#include <iostream>
int main(){
    int n;
    std::cout<<"введите первое число a: ";
    std::cin>> n;
    while (n % 3 != 0) {
        std::cout << "FALSE";
    }
    std::cout << "TRUE"<<'\n';
    return 0;
}
