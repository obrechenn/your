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
    int min = numbers[0];
    int index_max = 0;
    int index_min = 0;
    int index_ex = 0;
    for (int i = 1; i < N; ++i) {
        if (numbers[i] <= min) {
            min = numbers[i];
            index_min = i;
        }
        if (numbers[i] >= max) {
            max = numbers[i];
            index_max = i;
        }
        if (index_min> index_max)
        {
            index_ex = index_max;
        }
        else
        {
            index_ex = index_min;
        }
    }

    std::cout << "Номер последнего экстремального элемента: " << index_ex + 1 << '\n';

    return 0;
}