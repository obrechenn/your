#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N: ";
    std::cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = 2 * i + 1;
    }

    std::cout << "Массив первых " << N << " положительных нечетных чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << '\n';
    }
    return 0;
}
