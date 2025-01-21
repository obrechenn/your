#include <iostream>
#include <limits.h>
int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int numbers[100];
    int x,y;
    int min = INT_MAX;
    for (int i = 0; i < N; ++i) {
        std::cin >> x >> y;
        numbers[i] = x * y; 
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    std::cout<< min << '\n';
return  0;
}