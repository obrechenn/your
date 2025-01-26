#include <iostream>
#include <climits>

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int numbers[100];
    std::cout << "Введите " << N << " чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }
    int min = INT_MAX;
    for (int i = 1; i < N; ++i) { 
            if (numbers[i] < min && numbers[i] > 0) {
                min = numbers[i];
        }
    }   
    if(min < 0) {
        std::cout<< " 0 " << '\n';
    }else{
        std::cout << " минимальный элемент: " << min << '\n';
    }
    
    
    return 0;
}

