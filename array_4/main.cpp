#include <iostream>

int main() {
    int N;
    std::cout << "Введите целое число N (> 1): ";
    std::cin >> N;

    double A;
    std::cout << "Введите первый член A: ";
    std::cin >> A;
    double D;
    std::cout << "Введите знаменатель D: ";
    std::cin >> D;

    double arr[N];
    arr[0] = A;
    for (int i = 1; i < N; ++i) {
        arr[i] = arr[i - 1] * D;
    }
    std::cout << "Массив первых " << N << " членов геометрической прогрессии: ";
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
