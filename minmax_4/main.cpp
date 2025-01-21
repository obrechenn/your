#include <iostream>

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int numbers[N];
    std::cout << "Введите " << N << " чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }
    int index = 0;
    int min = numbers[0];
    for (int i = 1; i < N; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
            index = i;
    }
    }
    std::cout << "номер минимального элемента: " << index + 1 << '\n';

    return 0;
}