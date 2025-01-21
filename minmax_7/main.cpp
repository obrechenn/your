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
    int index_min = 0;
    int index_max = 0;
    for (int i = 1; i < N; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
            index_min = i;
        }
        if (numbers[i] > max) {
            max = numbers[i];
            index_max = i;
        }
    }
    int index_min1 = 0;
    int index_max1 = 0;
    for (int i = 1; i < N; ++i) {
        if (numbers[i] == min) {
            index_min1 = i;
        }
        if (numbers[i] == max) {
            index_max1 = i;
        }
    }
    std::cout << "Номер первого минимального элемента: " << index_min + 1 << '\n';
    std::cout << "Номер первого максимального элемента: " << index_max + 1<< '\n';

    return 0;
}