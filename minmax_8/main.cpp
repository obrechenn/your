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

    int min = numbers[0];
    int min1 = numbers[0];
    int index_min = 0;
    int index_min1 = 0;
    for (int i = 1; i < N; ++i) {
        if (numbers[i] <= min) {
            min = numbers[i];
            index_min = i;
        }
        if (numbers[i] < min1) {
            min1 = numbers[i];
            index_min1 = i;
        }
    }

    std::cout << "Номер последнего минимального элемента: " << index_min + 1 << '\n';
    std::cout << "Номер первого минимального элемента: " << index_min1 + 1<< '\n';

    return 0;
}