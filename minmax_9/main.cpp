#include <iostream>
int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int numbers[100];
    std::cout << "Введите " << N << " чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    int max = numbers[0];
    int max1 = numbers[0];
    int index_max = 0;
    int index_max1 = 0;
    for (int i = 1; i < N; ++i) {
        if (numbers[i] >= max) {
            max = numbers[i];
            index_max = i;
        }
        if (numbers[i] > max1) {
            max1 = numbers[i];
            index_max1 = i;
        }
    }

    std::cout << "Номер последнего максимального элемента: " << index_max + 1 << '\n';
    std::cout << "Номер первого максимального элемента: " << index_max1 + 1 << '\n';

    return 0;
}