#include <iostream>

int main() {
    int N;
    std::cout << "Введите количество чисел: ";
    std::cin >> N;

    int arr[N];
    std::cout << "Введите " << N << " чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    int min = 0;

    for (int i = 1; i < N; ++i) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    std::cout << "Номер минимального элемента: " << min + 1;
    return 0;
}
