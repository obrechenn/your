#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N (> 2): ";
    std::cin >> N;

    double arr[N];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 0; i < N - 2; ++i) {
       arr[i + 2] = arr[i] + arr[i + 1];
    }
    std::cout << "Массив первых " << N << " чисел фибоначчи: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
