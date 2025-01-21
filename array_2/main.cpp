#include <iostream>
int main() {
    int N;
    std::cout << "Введите целое число N(N<100): ";
    std::cin >> N;
    
    int arr[100];
    arr[0] = 2;
    for (int i = 1; i < N; ++i) {
        arr[i] = arr[i-1] * 2;
    }

    std::cout << "Массив первых " << N << " положительных нечетных чисел: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << '\n';
    }
    return 0;
}
