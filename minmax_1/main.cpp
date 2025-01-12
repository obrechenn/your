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

    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < N; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    std::cout << "Минимальный элемент: " << min << '\n';
    std::cout << "Максимальный элемент: " << max << '\n';

    return 0;
}