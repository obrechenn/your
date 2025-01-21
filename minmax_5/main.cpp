#include <iostream>
int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    double numbers[100];
    double m,v;
    double max = 0;
    int index = 0;
    for (int i = 0; i < N; ++i) {
        std::cin >> m >> v;
        numbers[i] = m / v; 
        if(numbers[i] > max){
            max = numbers[i];
            index = i;
        }
    }  
    for(int i = 0; i < N; i++){
    std::cout<<numbers[i]<<"   ";
    }
    std::cout<<'\n' << index + 1 << '\n';

return  0;
}