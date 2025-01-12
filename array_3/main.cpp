#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N: ";
    std::cin >> N;

    int A;
    std::cout << "Введите первый член A: ";
    std::cin >> A;
    int D;
    std::cout << "Введите разность D: ";
    std::cin >> D;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = A + i * D;
    }
    std::cout << "Массив первых " << N << " членов арифметической прогрессии: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << '\n';
    }
    return 0;
}
